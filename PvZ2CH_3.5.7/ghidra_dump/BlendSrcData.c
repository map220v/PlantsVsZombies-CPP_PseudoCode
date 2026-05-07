// Class: BlendSrcData


/* BlendSrcData::BlendSrcData() */

void __thiscall BlendSrcData::BlendSrcData(BlendSrcData *this)

{
  Sexy::PATransform::PATransform((PATransform *)this);
  Sexy::Color::Color((Color *)(this + 0x18));
  return;
}


/* BlendSrcData::BlendSrcData(BlendSrcData&&) */

void __thiscall BlendSrcData::BlendSrcData(BlendSrcData *this,BlendSrcData *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar1;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  Sexy::Insets::Insets((Insets *)(this + 0x18),(Insets *)(param_1 + 0x18));
  return;
}

