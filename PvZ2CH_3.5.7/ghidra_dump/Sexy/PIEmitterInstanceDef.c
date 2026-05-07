// Class: Sexy::PIEmitterInstanceDef


/* Sexy::PIEmitterInstanceDef::~PIEmitterInstanceDef() */

void __thiscall Sexy::PIEmitterInstanceDef::~PIEmitterInstanceDef(PIEmitterInstanceDef *this)

{
  vector<Sexy::PIValue2D,std::allocator<Sexy::PIValue2D>> *this_00;
  
  this_00 = (vector<Sexy::PIValue2D,std::allocator<Sexy::PIValue2D>> *)(this + 0x8f8);
  std::vector<Sexy::PIValue2D,std::allocator<Sexy::PIValue2D>>::~vector(this_00);
  if (this != (PIEmitterInstanceDef *)0xffffffffffffff58) {
    do {
      this_00 = this_00 + -0x70;
      PIValue::~PIValue((PIValue *)this_00);
    } while (this + 0xa8 != (PIEmitterInstanceDef *)this_00);
  }
  PIValue2D::~PIValue2D((PIValue2D *)(this + 0x48));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x28));
  std::string::~string((string *)this);
  return;
}


/* Sexy::PIEmitterInstanceDef::PIEmitterInstanceDef() */

void __thiscall Sexy::PIEmitterInstanceDef::PIEmitterInstanceDef(PIEmitterInstanceDef *this)

{
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *this_00;
  PIEmitterInstanceDef *this_01;
  
  Set8BytesTo0();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  PIValue2D::PIValue2D((PIValue2D *)(this + 0x48));
  this_01 = this + 0xa8;
  do {
    this_00 = (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this_01 + 0x70);
    PIValue::PIValue((PIValue *)this_01);
    this_01 = (PIEmitterInstanceDef *)this_00;
  } while (this_00 !=
           (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x8f8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(this_00);
  return;
}


/* Sexy::PIEmitterInstanceDef::PIEmitterInstanceDef(Sexy::PIEmitterInstanceDef const&) */

void __thiscall
Sexy::PIEmitterInstanceDef::PIEmitterInstanceDef
          (PIEmitterInstanceDef *this,PIEmitterInstanceDef *param_1)

{
  vector<Sexy::PIValue2D,std::allocator<Sexy::PIValue2D>> *this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  PIEmitterInstanceDef PVar6;
  PIEmitterInstanceDef PVar7;
  PIEmitterInstanceDef *this_01;
  PIEmitterInstanceDef *pPVar8;
  
  FUN_05475d88();
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  PVar6 = param_1[0x14];
  PVar7 = param_1[0x15];
  uVar4 = *(undefined4 *)(param_1 + 0x18);
  uVar5 = *(undefined4 *)(param_1 + 0x1c);
  this[0x20] = param_1[0x20];
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0xc) = uVar2;
  *(undefined4 *)(this + 0x10) = uVar3;
  this[0x14] = PVar6;
  this[0x15] = PVar7;
  *(undefined4 *)(this + 0x18) = uVar4;
  *(undefined4 *)(this + 0x1c) = uVar5;
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 0x28),(vector *)(param_1 + 0x28));
  this[0x40] = param_1[0x40];
  PIValue2D::PIValue2D((PIValue2D *)(this + 0x48),(PIValue2D *)(param_1 + 0x48));
  this_01 = this + 0xa8;
  pPVar8 = param_1 + 0xa8;
  do {
    this_00 = (vector<Sexy::PIValue2D,std::allocator<Sexy::PIValue2D>> *)(this_01 + 0x70);
    PIValue::PIValue((PIValue *)this_01,(PIValue *)pPVar8);
    this_01 = (PIEmitterInstanceDef *)this_00;
    pPVar8 = (PIEmitterInstanceDef *)(pPVar8 + 0x70);
  } while (this_00 != (vector<Sexy::PIValue2D,std::allocator<Sexy::PIValue2D>> *)(this + 0x8f8));
  std::vector<Sexy::PIValue2D,std::allocator<Sexy::PIValue2D>>::vector
            (this_00,(vector *)(param_1 + 0x8f8));
  *(undefined4 *)(this + 0x910) = *(undefined4 *)(param_1 + 0x910);
  return;
}

