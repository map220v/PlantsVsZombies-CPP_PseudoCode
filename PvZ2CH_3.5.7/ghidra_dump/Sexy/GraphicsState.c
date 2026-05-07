// Class: Sexy::GraphicsState


/* Sexy::GraphicsState::GraphicsState() */

void __thiscall Sexy::GraphicsState::GraphicsState(GraphicsState *this)

{
  Insets::Insets((Insets *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  Color::Color((Color *)(this + 0x48));
  Color::Color((Color *)(this + 0x58));
  return;
}


/* Sexy::GraphicsState::~GraphicsState() */

void __thiscall Sexy::GraphicsState::~GraphicsState(GraphicsState *this)

{
  std::vector<Sexy::Color,std::allocator<Sexy::Color>>::~vector
            ((vector<Sexy::Color,std::allocator<Sexy::Color>> *)(this + 0x30));
  return;
}


/* Sexy::GraphicsState::CopyStateFrom(Sexy::GraphicsState const*) */

void __thiscall Sexy::GraphicsState::CopyStateFrom(GraphicsState *this,GraphicsState *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  GraphicsState GVar8;
  GraphicsState GVar9;
  GraphicsState GVar10;
  GraphicsState GVar11;
  GraphicsState GVar12;
  undefined8 uVar13;
  
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  uVar13 = *(undefined8 *)param_1;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x68) = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(this + 0x20) = uVar1;
  *(undefined8 *)(this + 0x28) = uVar2;
  *(undefined8 *)this = uVar13;
  *(undefined4 *)(this + 8) = uVar3;
  *(undefined4 *)(this + 0xc) = uVar4;
  std::vector<Sexy::Color,std::allocator<Sexy::Color>>::operator=
            ((vector<Sexy::Color,std::allocator<Sexy::Color>> *)(this + 0x30),
             (vector *)(param_1 + 0x30));
  uVar3 = *(undefined4 *)(param_1 + 0x70);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uVar13 = *(undefined8 *)(param_1 + 0x50);
  GVar8 = param_1[0x74];
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  GVar9 = param_1[0x75];
  uVar5 = *(undefined4 *)(param_1 + 0x14);
  GVar10 = param_1[0x76];
  uVar6 = *(undefined4 *)(param_1 + 0x18);
  GVar11 = param_1[0x77];
  *(undefined8 *)(this + 0x58) = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(this + 0x60) = uVar2;
  uVar7 = *(undefined4 *)(param_1 + 0x1c);
  GVar12 = param_1[0x78];
  *(undefined8 *)(this + 0x48) = uVar1;
  *(undefined8 *)(this + 0x50) = uVar13;
  *(undefined4 *)(this + 0x70) = uVar3;
  this[0x74] = GVar8;
  this[0x75] = GVar9;
  this[0x76] = GVar10;
  this[0x77] = GVar11;
  this[0x78] = GVar12;
  *(undefined4 *)(this + 0x10) = uVar4;
  *(undefined4 *)(this + 0x14) = uVar5;
  *(undefined4 *)(this + 0x18) = uVar6;
  *(undefined4 *)(this + 0x1c) = uVar7;
  return;
}


/* Sexy::GraphicsState::GraphicsState(Sexy::GraphicsState&&) */

void __thiscall Sexy::GraphicsState::GraphicsState(GraphicsState *this,GraphicsState *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  GraphicsState GVar7;
  GraphicsState GVar8;
  GraphicsState GVar9;
  GraphicsState GVar10;
  undefined8 uVar11;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  *(undefined8 *)this = *(undefined8 *)param_1;
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  uVar5 = *(undefined4 *)(param_1 + 0x18);
  uVar6 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0xc) = uVar2;
  *(undefined4 *)(this + 0x10) = uVar3;
  *(undefined4 *)(this + 0x14) = uVar4;
  *(undefined4 *)(this + 0x18) = uVar5;
  *(undefined4 *)(this + 0x1c) = uVar6;
  Insets::Insets((Insets *)(this + 0x20),(Insets *)(param_1 + 0x20));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x30),(vector *)(param_1 + 0x30));
  Insets::Insets((Insets *)(this + 0x48),(Insets *)(param_1 + 0x48));
  Insets::Insets((Insets *)(this + 0x58),(Insets *)(param_1 + 0x58));
  uVar11 = *(undefined8 *)(param_1 + 0x68);
  uVar1 = *(undefined4 *)(param_1 + 0x70);
  GVar7 = param_1[0x74];
  GVar8 = param_1[0x75];
  GVar9 = param_1[0x76];
  GVar10 = param_1[0x77];
  this[0x78] = param_1[0x78];
  *(undefined8 *)(this + 0x68) = uVar11;
  *(undefined4 *)(this + 0x70) = uVar1;
  this[0x74] = GVar7;
  this[0x75] = GVar8;
  this[0x76] = GVar9;
  this[0x77] = GVar10;
  return;
}


/* Sexy::GraphicsState::GraphicsState(Sexy::GraphicsState const&) */

void __thiscall Sexy::GraphicsState::GraphicsState(GraphicsState *this,GraphicsState *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  GraphicsState GVar7;
  GraphicsState GVar8;
  GraphicsState GVar9;
  GraphicsState GVar10;
  undefined8 uVar11;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  *(undefined8 *)this = *(undefined8 *)param_1;
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  uVar5 = *(undefined4 *)(param_1 + 0x18);
  uVar6 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0xc) = uVar2;
  *(undefined4 *)(this + 0x10) = uVar3;
  *(undefined4 *)(this + 0x14) = uVar4;
  *(undefined4 *)(this + 0x18) = uVar5;
  *(undefined4 *)(this + 0x1c) = uVar6;
  Insets::Insets((Insets *)(this + 0x20),(Insets *)(param_1 + 0x20));
  std::vector<Sexy::Color,std::allocator<Sexy::Color>>::vector
            ((vector<Sexy::Color,std::allocator<Sexy::Color>> *)(this + 0x30),
             (vector *)(param_1 + 0x30));
  Insets::Insets((Insets *)(this + 0x48),(Insets *)(param_1 + 0x48));
  Insets::Insets((Insets *)(this + 0x58),(Insets *)(param_1 + 0x58));
  uVar11 = *(undefined8 *)(param_1 + 0x68);
  uVar1 = *(undefined4 *)(param_1 + 0x70);
  GVar7 = param_1[0x74];
  GVar8 = param_1[0x75];
  GVar9 = param_1[0x76];
  GVar10 = param_1[0x77];
  this[0x78] = param_1[0x78];
  *(undefined8 *)(this + 0x68) = uVar11;
  *(undefined4 *)(this + 0x70) = uVar1;
  this[0x74] = GVar7;
  this[0x75] = GVar8;
  this[0x76] = GVar9;
  this[0x77] = GVar10;
  return;
}

