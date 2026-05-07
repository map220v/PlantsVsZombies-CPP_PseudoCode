// Class: Sexy::PIForce


/* Sexy::PIForce::PIForce() */

void __thiscall Sexy::PIForce::PIForce(PIForce *this)

{
  PIForce *pPVar1;
  PIForce *this_00;
  
  Set8BytesTo0();
  PIValue2D::PIValue2D((PIValue2D *)(this + 0x10));
  PIValue::PIValue((PIValue *)(this + 0x70));
  PIValue::PIValue((PIValue *)(this + 0xe0));
  PIValue::PIValue((PIValue *)(this + 0x150));
  PIValue::PIValue((PIValue *)(this + 0x1c0));
  PIValue::PIValue((PIValue *)(this + 0x230));
  PIValue::PIValue((PIValue *)(this + 0x2a0));
  this_00 = this + 0x310;
  do {
    pPVar1 = this_00 + 8;
    PieceConfig::PieceConfig((PieceConfig *)this_00);
    this_00 = pPVar1;
  } while (pPVar1 != this + 0x338);
  return;
}


/* Sexy::PIForce::~PIForce() */

void __thiscall Sexy::PIForce::~PIForce(PIForce *this)

{
  PIValue::~PIValue((PIValue *)(this + 0x2a0));
  PIValue::~PIValue((PIValue *)(this + 0x230));
  PIValue::~PIValue((PIValue *)(this + 0x1c0));
  PIValue::~PIValue((PIValue *)(this + 0x150));
  PIValue::~PIValue((PIValue *)(this + 0xe0));
  PIValue::~PIValue((PIValue *)(this + 0x70));
  PIValue2D::~PIValue2D((PIValue2D *)(this + 0x10));
  std::string::~string((string *)this);
  return;
}


/* Sexy::PIForce::PIForce(Sexy::PIForce const&) */

void __thiscall Sexy::PIForce::PIForce(PIForce *this,PIForce *param_1)

{
  PIForce *pPVar1;
  PIForce *this_00;
  PIForce *pPVar2;
  
  FUN_05475d88();
  this[8] = param_1[8];
  PIValue2D::PIValue2D((PIValue2D *)(this + 0x10),(PIValue2D *)(param_1 + 0x10));
  PIValue::PIValue((PIValue *)(this + 0x70),(PIValue *)(param_1 + 0x70));
  PIValue::PIValue((PIValue *)(this + 0xe0),(PIValue *)(param_1 + 0xe0));
  PIValue::PIValue((PIValue *)(this + 0x150),(PIValue *)(param_1 + 0x150));
  PIValue::PIValue((PIValue *)(this + 0x1c0),(PIValue *)(param_1 + 0x1c0));
  PIValue::PIValue((PIValue *)(this + 0x230),(PIValue *)(param_1 + 0x230));
  PIValue::PIValue((PIValue *)(this + 0x2a0),(PIValue *)(param_1 + 0x2a0));
  this_00 = this + 0x310;
  pPVar2 = param_1 + 0x310;
  do {
    pPVar1 = this_00 + 8;
    FPoint::FPoint((FPoint *)this_00,(TPoint *)pPVar2);
    this_00 = pPVar1;
    pPVar2 = (PIForce *)(pPVar2 + 8);
  } while (pPVar1 != this + 0x338);
  return;
}

