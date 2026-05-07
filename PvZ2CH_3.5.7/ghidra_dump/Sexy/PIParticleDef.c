// Class: Sexy::PIParticleDef


/* Sexy::PIParticleDef::PIParticleDef() */

void __thiscall Sexy::PIParticleDef::PIParticleDef(PIParticleDef *this)

{
  PieceConfig *this_00;
  PIParticleDef *this_01;
  
  Set8BytesTo0(this + 0x10);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  this_01 = this + 0x38;
  do {
    this_00 = (PieceConfig *)(this_01 + 0x70);
    PIValue::PIValue((PIValue *)this_01);
    this_01 = (PIParticleDef *)this_00;
  } while (this_00 != (PieceConfig *)(this + 0xc78));
  PieceConfig::PieceConfig(this_00);
  PIInterpolator::PIInterpolator((PIInterpolator *)(this + 0xcc8));
  PIInterpolator::PIInterpolator((PIInterpolator *)(this + 0xce0));
  return;
}


/* Sexy::PIParticleDef::~PIParticleDef() */

void __thiscall Sexy::PIParticleDef::~PIParticleDef(PIParticleDef *this)

{
  PIParticleDef *this_00;
  
  PIInterpolator::~PIInterpolator((PIInterpolator *)(this + 0xce0));
  this_00 = this + 0xc78;
  PIInterpolator::~PIInterpolator((PIInterpolator *)(this + 0xcc8));
  if (this != (PIParticleDef *)0xffffffffffffffc8) {
    do {
      this_00 = this_00 + -0x70;
      PIValue::~PIValue((PIValue *)this_00);
    } while (this + 0x38 != this_00);
  }
  std::vector<Sexy::PITextureChunk,std::allocator<Sexy::PITextureChunk>>::~vector
            ((vector<Sexy::PITextureChunk,std::allocator<Sexy::PITextureChunk>> *)(this + 0x20));
  std::string::~string((string *)(this + 0x10));
  return;
}


/* Sexy::PIParticleDef::PIParticleDef(Sexy::PIParticleDef&&) */

void __thiscall Sexy::PIParticleDef::PIParticleDef(PIParticleDef *this,PIParticleDef *param_1)

{
  FPoint *this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  PIParticleDef PVar6;
  PIParticleDef PVar7;
  PIParticleDef PVar8;
  PIParticleDef PVar9;
  PIParticleDef PVar10;
  PIParticleDef PVar11;
  PIParticleDef PVar12;
  PIParticleDef PVar13;
  PIParticleDef PVar14;
  PIParticleDef PVar15;
  PIParticleDef PVar16;
  undefined8 uVar17;
  PIParticleDef *this_01;
  PIParticleDef *pPVar18;
  
  uVar17 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar17;
  FUN_05474148(this + 0x10,param_1 + 0x10);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x20),(vector *)(param_1 + 0x20));
  this_01 = this + 0x38;
  pPVar18 = param_1 + 0x38;
  do {
    this_00 = (FPoint *)(this_01 + 0x70);
    PIValue::PIValue((PIValue *)this_01,(PIValue *)pPVar18);
    this_01 = (PIParticleDef *)this_00;
    pPVar18 = (PIParticleDef *)(pPVar18 + 0x70);
  } while (this_00 != (FPoint *)(this + 0xc78));
  FPoint::FPoint(this_00,(TPoint *)(param_1 + 0xc78));
  uVar1 = *(undefined4 *)(param_1 + 0xc90);
  PVar6 = param_1[0xc80];
  PVar7 = param_1[0xc81];
  PVar8 = param_1[0xc82];
  PVar9 = param_1[0xc83];
  PVar10 = param_1[0xc84];
  uVar2 = *(undefined4 *)(param_1 + 0xc88);
  PVar11 = param_1[0xc8c];
  PVar12 = param_1[0xc94];
  PVar13 = param_1[0xc95];
  uVar3 = *(undefined4 *)(param_1 + 0xc98);
  uVar4 = *(undefined4 *)(param_1 + 0xc9c);
  PVar14 = param_1[0xca0];
  PVar15 = param_1[0xca1];
  PVar16 = param_1[0xca2];
  this[0xca3] = param_1[0xca3];
  this[0xc80] = PVar6;
  this[0xc81] = PVar7;
  this[0xc82] = PVar8;
  this[0xc83] = PVar9;
  this[0xc84] = PVar10;
  *(undefined4 *)(this + 0xc88) = uVar2;
  this[0xc8c] = PVar11;
  *(undefined4 *)(this + 0xc90) = uVar1;
  this[0xc94] = PVar12;
  this[0xc95] = PVar13;
  *(undefined4 *)(this + 0xc98) = uVar3;
  *(undefined4 *)(this + 0xc9c) = uVar4;
  this[0xca0] = PVar14;
  this[0xca1] = PVar15;
  this[0xca2] = PVar16;
  this[0xca4] = param_1[0xca4];
  PVar6 = param_1[0xca5];
  uVar1 = *(undefined4 *)(param_1 + 0xca8);
  PVar7 = param_1[0xcac];
  PVar8 = param_1[0xcad];
  PVar9 = param_1[0xcae];
  PVar10 = param_1[0xcaf];
  PVar11 = param_1[0xcb0];
  PVar12 = param_1[0xcb1];
  uVar2 = *(undefined4 *)(param_1 + 0xcb4);
  uVar3 = *(undefined4 *)(param_1 + 0xcb8);
  uVar4 = *(undefined4 *)(param_1 + 0xcbc);
  uVar5 = *(undefined4 *)(param_1 + 0xcc0);
  this[0xcc4] = param_1[0xcc4];
  this[0xca5] = PVar6;
  *(undefined4 *)(this + 0xca8) = uVar1;
  this[0xcac] = PVar7;
  this[0xcad] = PVar8;
  this[0xcae] = PVar9;
  this[0xcaf] = PVar10;
  this[0xcb0] = PVar11;
  this[0xcb1] = PVar12;
  *(undefined4 *)(this + 0xcb4) = uVar2;
  *(undefined4 *)(this + 0xcb8) = uVar3;
  *(undefined4 *)(this + 0xcbc) = uVar4;
  *(undefined4 *)(this + 0xcc0) = uVar5;
  PIInterpolator::PIInterpolator
            ((PIInterpolator *)(this + 0xcc8),(PIInterpolator *)(param_1 + 0xcc8));
  PIInterpolator::PIInterpolator
            ((PIInterpolator *)(this + 0xce0),(PIInterpolator *)(param_1 + 0xce0));
  *(undefined4 *)(this + 0xcf8) = *(undefined4 *)(param_1 + 0xcf8);
  return;
}


/* Sexy::PIParticleDef::TEMPNAMEPLACEHOLDERVALUE(Sexy::PIParticleDef&&) */

PIParticleDef * __thiscall
Sexy::PIParticleDef::operator=(PIParticleDef *this,PIParticleDef *param_1)

{
  PIParticleDef *pPVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  PIParticleDef PVar7;
  PIParticleDef PVar8;
  PIParticleDef PVar9;
  PIParticleDef PVar10;
  PIParticleDef PVar11;
  PIParticleDef PVar12;
  PIParticleDef PVar13;
  PIParticleDef PVar14;
  PIParticleDef PVar15;
  PIParticleDef PVar16;
  undefined8 uVar17;
  PIParticleDef *this_00;
  PIParticleDef *pPVar18;
  
  uVar17 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar17;
  FUN_05474278(this + 0x10,param_1 + 0x10);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  std::vector<Sexy::PITextureChunk,std::allocator<Sexy::PITextureChunk>>::operator=
            ((vector<Sexy::PITextureChunk,std::allocator<Sexy::PITextureChunk>> *)(this + 0x20),
             (vector *)(param_1 + 0x20));
  this_00 = this + 0x38;
  pPVar18 = param_1 + 0x38;
  do {
    pPVar1 = this_00 + 0x70;
    PIValue::operator=((PIValue *)this_00,(PIValue *)pPVar18);
    this_00 = pPVar1;
    pPVar18 = (PIParticleDef *)(pPVar18 + 0x70);
  } while (pPVar1 != this + 0xc78);
  uVar2 = *(undefined4 *)(param_1 + 0xc90);
  uVar17 = *(undefined8 *)(param_1 + 0xc78);
  PVar7 = param_1[0xc80];
  PVar8 = param_1[0xc81];
  PVar9 = param_1[0xc82];
  PVar10 = param_1[0xc83];
  PVar11 = param_1[0xc84];
  uVar3 = *(undefined4 *)(param_1 + 0xc88);
  PVar12 = param_1[0xc8c];
  PVar13 = param_1[0xc94];
  PVar14 = param_1[0xc95];
  uVar4 = *(undefined4 *)(param_1 + 0xc98);
  uVar5 = *(undefined4 *)(param_1 + 0xc9c);
  PVar15 = param_1[0xca0];
  PVar16 = param_1[0xca1];
  this[0xca2] = param_1[0xca2];
  *(undefined8 *)(this + 0xc78) = uVar17;
  this[0xc80] = PVar7;
  this[0xc81] = PVar8;
  this[0xc82] = PVar9;
  this[0xc83] = PVar10;
  this[0xc84] = PVar11;
  *(undefined4 *)(this + 0xc88) = uVar3;
  this[0xc8c] = PVar12;
  *(undefined4 *)(this + 0xc90) = uVar2;
  this[0xc94] = PVar13;
  this[0xc95] = PVar14;
  *(undefined4 *)(this + 0xc98) = uVar4;
  *(undefined4 *)(this + 0xc9c) = uVar5;
  this[0xca0] = PVar15;
  this[0xca1] = PVar16;
  this[0xca3] = param_1[0xca3];
  PVar7 = param_1[0xca4];
  PVar8 = param_1[0xca5];
  uVar2 = *(undefined4 *)(param_1 + 0xca8);
  PVar9 = param_1[0xcac];
  PVar10 = param_1[0xcad];
  PVar11 = param_1[0xcae];
  PVar12 = param_1[0xcaf];
  PVar13 = param_1[0xcb0];
  PVar14 = param_1[0xcb1];
  uVar3 = *(undefined4 *)(param_1 + 0xcb4);
  uVar4 = *(undefined4 *)(param_1 + 0xcb8);
  uVar5 = *(undefined4 *)(param_1 + 0xcbc);
  uVar6 = *(undefined4 *)(param_1 + 0xcc0);
  this[0xcc4] = param_1[0xcc4];
  this[0xca4] = PVar7;
  this[0xca5] = PVar8;
  *(undefined4 *)(this + 0xca8) = uVar2;
  this[0xcac] = PVar9;
  this[0xcad] = PVar10;
  this[0xcae] = PVar11;
  this[0xcaf] = PVar12;
  this[0xcb0] = PVar13;
  this[0xcb1] = PVar14;
  *(undefined4 *)(this + 0xcb4) = uVar3;
  *(undefined4 *)(this + 0xcb8) = uVar4;
  *(undefined4 *)(this + 0xcbc) = uVar5;
  *(undefined4 *)(this + 0xcc0) = uVar6;
  PIInterpolator::operator=((PIInterpolator *)(this + 0xcc8),(PIInterpolator *)(param_1 + 0xcc8));
  PIInterpolator::operator=((PIInterpolator *)(this + 0xce0),(PIInterpolator *)(param_1 + 0xce0));
  *(undefined4 *)(this + 0xcf8) = *(undefined4 *)(param_1 + 0xcf8);
  return this;
}


/* Sexy::PIParticleDef::PIParticleDef(Sexy::PIParticleDef const&) */

void __thiscall Sexy::PIParticleDef::PIParticleDef(PIParticleDef *this,PIParticleDef *param_1)

{
  FPoint *this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  PIParticleDef PVar6;
  PIParticleDef PVar7;
  PIParticleDef PVar8;
  PIParticleDef PVar9;
  PIParticleDef PVar10;
  PIParticleDef PVar11;
  PIParticleDef PVar12;
  PIParticleDef PVar13;
  PIParticleDef PVar14;
  PIParticleDef PVar15;
  PIParticleDef PVar16;
  undefined8 uVar17;
  PIParticleDef *this_01;
  PIParticleDef *pPVar18;
  
  uVar17 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar17;
  FUN_05475d88(this + 0x10,param_1 + 0x10);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  std::vector<Sexy::PITextureChunk,std::allocator<Sexy::PITextureChunk>>::vector
            ((vector<Sexy::PITextureChunk,std::allocator<Sexy::PITextureChunk>> *)(this + 0x20),
             (vector *)(param_1 + 0x20));
  this_01 = this + 0x38;
  pPVar18 = param_1 + 0x38;
  do {
    this_00 = (FPoint *)(this_01 + 0x70);
    PIValue::PIValue((PIValue *)this_01,(PIValue *)pPVar18);
    this_01 = (PIParticleDef *)this_00;
    pPVar18 = (PIParticleDef *)(pPVar18 + 0x70);
  } while (this_00 != (FPoint *)(this + 0xc78));
  FPoint::FPoint(this_00,(TPoint *)(param_1 + 0xc78));
  uVar1 = *(undefined4 *)(param_1 + 0xc90);
  PVar6 = param_1[0xc80];
  PVar7 = param_1[0xc81];
  PVar8 = param_1[0xc82];
  PVar9 = param_1[0xc83];
  PVar10 = param_1[0xc84];
  uVar2 = *(undefined4 *)(param_1 + 0xc88);
  PVar11 = param_1[0xc8c];
  PVar12 = param_1[0xc94];
  PVar13 = param_1[0xc95];
  uVar3 = *(undefined4 *)(param_1 + 0xc98);
  uVar4 = *(undefined4 *)(param_1 + 0xc9c);
  PVar14 = param_1[0xca0];
  PVar15 = param_1[0xca1];
  PVar16 = param_1[0xca2];
  this[0xca3] = param_1[0xca3];
  this[0xc80] = PVar6;
  this[0xc81] = PVar7;
  this[0xc82] = PVar8;
  this[0xc83] = PVar9;
  this[0xc84] = PVar10;
  *(undefined4 *)(this + 0xc88) = uVar2;
  this[0xc8c] = PVar11;
  *(undefined4 *)(this + 0xc90) = uVar1;
  this[0xc94] = PVar12;
  this[0xc95] = PVar13;
  *(undefined4 *)(this + 0xc98) = uVar3;
  *(undefined4 *)(this + 0xc9c) = uVar4;
  this[0xca0] = PVar14;
  this[0xca1] = PVar15;
  this[0xca2] = PVar16;
  this[0xca4] = param_1[0xca4];
  PVar6 = param_1[0xca5];
  uVar1 = *(undefined4 *)(param_1 + 0xca8);
  PVar7 = param_1[0xcac];
  PVar8 = param_1[0xcad];
  PVar9 = param_1[0xcae];
  PVar10 = param_1[0xcaf];
  PVar11 = param_1[0xcb0];
  PVar12 = param_1[0xcb1];
  uVar2 = *(undefined4 *)(param_1 + 0xcb4);
  uVar3 = *(undefined4 *)(param_1 + 0xcb8);
  uVar4 = *(undefined4 *)(param_1 + 0xcbc);
  uVar5 = *(undefined4 *)(param_1 + 0xcc0);
  this[0xcc4] = param_1[0xcc4];
  this[0xca5] = PVar6;
  *(undefined4 *)(this + 0xca8) = uVar1;
  this[0xcac] = PVar7;
  this[0xcad] = PVar8;
  this[0xcae] = PVar9;
  this[0xcaf] = PVar10;
  this[0xcb0] = PVar11;
  this[0xcb1] = PVar12;
  *(undefined4 *)(this + 0xcb4) = uVar2;
  *(undefined4 *)(this + 0xcb8) = uVar3;
  *(undefined4 *)(this + 0xcbc) = uVar4;
  *(undefined4 *)(this + 0xcc0) = uVar5;
  PIInterpolator::PIInterpolator
            ((PIInterpolator *)(this + 0xcc8),(PIInterpolator *)(param_1 + 0xcc8));
  PIInterpolator::PIInterpolator
            ((PIInterpolator *)(this + 0xce0),(PIInterpolator *)(param_1 + 0xce0));
  *(undefined4 *)(this + 0xcf8) = *(undefined4 *)(param_1 + 0xcf8);
  return;
}

