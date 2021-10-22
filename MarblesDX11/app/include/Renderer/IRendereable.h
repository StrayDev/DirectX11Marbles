#pragma once


class IRenderable
{
	friend Renderer;

public:
	using Matrix = DirectX::XMMATRIX;

public:
	virtual ~IRenderable() = default;
	virtual Matrix& GetWorldTransform() = 0;

private:
	virtual const D3D11_BUFFER_DESC& GetConstantBufferDesc() = 0;
};