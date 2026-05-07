// Class: Sexy::PILayer


/* Sexy::PILayer::SetVisible(bool) */

void __thiscall Sexy::PILayer::SetVisible(PILayer *this,bool param_1)

{
  this[0x2c] = (PILayer)param_1;
  return;
}


/* Sexy::PILayer::GetEmitter(int) */

undefined8 __thiscall Sexy::PILayer::GetEmitter(PILayer *this,int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(this + 8);
  iVar1 = FUN_053b9b14(uVar2,*(undefined8 *)(this + 0x10));
  if (param_1 < iVar1) {
    uVar2 = FUN_053b9b34(uVar2,(long)param_1);
    return uVar2;
  }
  return 0;
}


/* Sexy::PILayer::GetEmitter(std::string const&) */

long __thiscall Sexy::PILayer::GetEmitter(PILayer *this,string *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  char *__s1;
  char *__s2;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 8);
  iVar1 = FUN_053b9b14(uVar5,*(undefined8 *)(this + 0x10));
  lVar4 = 0;
  while( true ) {
    if (iVar1 <= (int)lVar4) {
      return 0;
    }
    lVar3 = FUN_05474184(param_1);
    if (lVar3 == 0) break;
    lVar3 = FUN_053b9b34(uVar5,lVar4);
    __s1 = (char *)FUN_0547429c(*(undefined8 *)(lVar3 + 0x38));
    __s2 = (char *)FUN_0547429c(param_1);
    iVar2 = strcasecmp(__s1,__s2);
    lVar4 = lVar4 + 1;
    if (iVar2 == 0) {
      return lVar3;
    }
  }
  lVar4 = FUN_053b9b34(uVar5,(long)(int)lVar4);
  return lVar4;
}


/* Sexy::PILayer::~PILayer() */

void __thiscall Sexy::PILayer::~PILayer(PILayer *this)

{
  std::vector<Sexy::PIEmitterInstance,std::allocator<Sexy::PIEmitterInstance>>::~vector
            ((vector<Sexy::PIEmitterInstance,std::allocator<Sexy::PIEmitterInstance>> *)(this + 8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PILayer::PILayer() */

void __thiscall Sexy::PILayer::PILayer(PILayer *this)

{
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  PieceConfig::PieceConfig((PieceConfig *)(this + 0x20));
  Color::Color((Color *)(this + 0x30));
  Point::Point((Point *)(this + 0x48));
  this[0x2c] = (PILayer)0x1;
  Color::Color((Color *)&local_18,1);
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x30) = local_18;
  *(undefined8 *)(this + 0x38) = uStack_10;
  SexyMatrix3::LoadIdentity((SexyMatrix3 *)(this + 0x50));
  std::vector<Sexy::PIEmitterInstance,std::allocator<Sexy::PIEmitterInstance>>::reserve
            ((vector<Sexy::PIEmitterInstance,std::allocator<Sexy::PIEmitterInstance>> *)(this + 8),
             10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::PILayer::PILayer(Sexy::PILayer const&) */

void __thiscall Sexy::PILayer::PILayer(PILayer *this,PILayer *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  *(undefined8 *)this = *(undefined8 *)param_1;
  std::vector<Sexy::PIEmitterInstance,std::allocator<Sexy::PIEmitterInstance>>::vector
            ((vector<Sexy::PIEmitterInstance,std::allocator<Sexy::PIEmitterInstance>> *)(this + 8),
             (vector *)(param_1 + 8));
  FPoint::FPoint((FPoint *)(this + 0x20),(TPoint *)(param_1 + 0x20));
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  this[0x2c] = param_1[0x2c];
  *(undefined4 *)(this + 0x28) = uVar2;
  Insets::Insets((Insets *)(this + 0x30),(Insets *)(param_1 + 0x30));
  *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_1 + 0x40);
  Point::Point((Point *)(this + 0x48),(TPoint *)(param_1 + 0x48));
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(this + 0x58) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(this + 0x60) = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(this + 0x68) = uVar1;
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  return;
}

