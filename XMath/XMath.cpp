#include <Windows.h>
#include <iostream>
#include <DirectXMath.h>
#include <DirectXPackedVector.h>

using namespace std;
using namespace DirectX;
using namespace DirectX::PackedVector;

ostream& XM_CALLCONV operator<<(ostream& os, FXMVECTOR v)
{
    XMFLOAT3 dest;
    XMStoreFloat3(&dest, v);

    os << "(" << dest.x << ", " << dest.y << ", " << dest.z << ")";
    return os;
}

int main()
{
    //typedef __m128 XMVECTOR;

    cout.setf(ios_base::boolalpha);

    if (!XMVerifyCPUSupport())
    {
        cout << "DirectXMath is not supported" << endl;
        return 0;
    }

    XMVECTOR p = XMVectorZero();
    XMVECTOR q = XMVectorSet(1.0f, 2.0f, 3.0f, 4.0f);

    cout << p << q << endl;
}
