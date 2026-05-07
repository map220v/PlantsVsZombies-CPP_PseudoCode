// Class: Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>::TextureDataPiece


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex, Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo,
   Sexy::AndroidRenderDeviceES20>::TextureDataPiece::TextureDataPiece() */

void __thiscall
Sexy::
BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
::TextureDataPiece::TextureDataPiece(TextureDataPiece *this)

{
  long lVar1;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GLTexHolder::GLTexHolder((GLTexHolder *)this);
  GLTexHolder::GLTexHolder((GLTexHolder *)(this + 8));
  GLTexHolder::GLTexHolder((GLTexHolder *)(this + 0x10));
  GLTexHolder::GLTexHolder((GLTexHolder *)(this + 0x18));
  GLTexHolder::GLTexHolder((GLTexHolder *)&local_10,0);
  *(undefined8 *)this = local_10;
  GLTexHolder::GLTexHolder((GLTexHolder *)&local_10,0);
  *(undefined8 *)(this + 8) = local_10;
  GLTexHolder::GLTexHolder((GLTexHolder *)&local_10,0);
  *(undefined8 *)(this + 0x10) = local_10;
  GLTexHolder::GLTexHolder((GLTexHolder *)&local_10,0);
  *(undefined4 *)(this + 0x20) = 0;
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x18) = local_10;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

