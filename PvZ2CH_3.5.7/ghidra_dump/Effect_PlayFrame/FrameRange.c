// Class: Effect_PlayFrame::FrameRange


/* Effect_PlayFrame::FrameRange::FrameRange() */

void __thiscall Effect_PlayFrame::FrameRange::FrameRange(FrameRange *this)

{
  Set8BytesTo0();
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined4 *)(this + 0xc) = 0xffffffff;
  return;
}


/* Effect_PlayFrame::FrameRange::TEMPNAMEPLACEHOLDERVALUE(Effect_PlayFrame::FrameRange&&) */

FrameRange * __thiscall
Effect_PlayFrame::FrameRange::operator=(FrameRange *this,FrameRange *param_1)

{
  undefined4 uVar1;
  
  FUN_05474278();
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 8) = uVar1;
  return this;
}

