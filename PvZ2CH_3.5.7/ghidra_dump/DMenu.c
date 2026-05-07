// Class: DMenu


/* DMenu::handleTouchMoved(Sexy::Touch const&) */

void DMenu::handleTouchMoved(Touch *param_1)

{
  return;
}


/* DMenu::handleTouchCancelled(Sexy::Touch const&) */

void DMenu::handleTouchCancelled(Touch *param_1)

{
  return;
}


/* DMenu::isEnable() const */

DMenu __thiscall DMenu::isEnable(DMenu *this)

{
  return this[0x174];
}


/* DMenu::~DMenu() */

void __thiscall DMenu::~DMenu(DMenu *this)

{
  *(undefined ***)this = &PTR__DMenu_06a25b80;
  *(undefined ***)(this + 0x10) = &PTR_setColor_06a25f30;
  *(undefined ***)(this + 0x150) = &PTR__DMenu_06a25f68;
  std::string::~string((string *)(this + 400));
  DTouchLayer::~DTouchLayer((DTouchLayer *)this);
  return;
}


/* non-virtual thunk to DMenu::~DMenu() */

void __thiscall DMenu::~DMenu(DMenu *this)

{
  ~DMenu(this + -0x150);
  return;
}


/* DMenu::~DMenu() */

void __thiscall DMenu::~DMenu(DMenu *this)

{
  ~DMenu(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DMenu::~DMenu() */

void __thiscall DMenu::~DMenu(DMenu *this)

{
  ~DMenu(this + -0x150);
  return;
}


/* DMenu::setTargetName(std::string const&) */

void DMenu::setTargetName(string *param_1)

{
  thunk_FUN_05475e00(param_1 + 400);
  return;
}


/* DMenu::handleTouchBegan(Sexy::Touch const&) */

undefined8 DMenu::handleTouchBegan(Touch *param_1)

{
  return 0;
}


/* DMenu::handleTouchEnded(Sexy::Touch const&) */

void DMenu::handleTouchEnded(Touch *param_1)

{
  return;
}


/* DMenu::removeChild(DTransformNode*, bool) */

void __thiscall DMenu::removeChild(DMenu *this,DTransformNode *param_1,bool param_2)

{
  char cVar1;
  
  cVar1 = DTransformNode::isNoCast(param_1);
  if ((cVar1 == '\0') && (param_1 == *(DTransformNode **)(this + 0x178))) {
    *(undefined8 *)(this + 0x178) = 0;
    DTransformNode::removeChild((DTransformNode *)this,param_1,param_2);
    return;
  }
  DTransformNode::removeChild((DTransformNode *)this,param_1,param_2);
  return;
}


/* DMenu::setRadioItem(DButton*) */

void __thiscall DMenu::setRadioItem(DMenu *this,DButton *param_1)

{
  FUN_04f9473c(this + 0x170);
  if (*(long **)(this + 0x180) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x180) + 0x3d8))();
  }
  *(DButton **)(this + 0x180) = param_1;
  if (param_1 != (DButton *)0x0) {
    (**(code **)(*(long *)param_1 + 0x3d0))(param_1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DMenu::init() */

void __thiscall DMenu::init(DMenu *this)

{
  code *pcVar1;
  DVec2 aDStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)(this + 0x150) + 0x10))(this + 0x150,1,0xfffffc00);
  (**(code **)(*(long *)this + 0x380))(this,1);
  (**(code **)(*(long *)this + 0x248))(this,1);
  (**(code **)(*(long *)this + 600))(this,1);
  (**(code **)(*(long *)this + 0x198))(this,1);
  pcVar1 = *(code **)(*(long *)this + 0x128);
  DVec2::DVec2(aDStack_10,0.5,0.5);
  (*pcVar1)(this,aDStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DMenu::DMenu() */

void __thiscall DMenu::DMenu(DMenu *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  DTouchLayer::DTouchLayer((DTouchLayer *)this);
  *(undefined4 *)(this + 0x170) = 1;
  *(undefined ***)this = &PTR__DMenu_06a25b80;
  *(undefined ***)(this + 0x10) = &PTR_setColor_06a25f30;
  *(undefined ***)(this + 0x150) = &PTR__DMenu_06a25f68;
  this[0x174] = (DMenu)0x0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined4 *)(this + 0x188) = 0;
  std::string::string((string *)(this + 400),"");
  nop();
  init(this);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DMenu::setRadio() */

void __thiscall DMenu::setRadio(DMenu *this)

{
  long *plVar1;
  
  if (*(int *)(this + 0x170) != 0) {
    return;
  }
  if (*(long **)(this + 0x180) == (long *)0x0) {
    plVar1 = *(long **)(this + 0x178);
    if (plVar1 == (long *)0x0) {
      return;
    }
  }
  else {
    (**(code **)(**(long **)(this + 0x180) + 0x3d8))();
    plVar1 = *(long **)(this + 0x178);
    if (plVar1 == (long *)0x0) {
      plVar1 = *(long **)(this + 0x180);
      if (plVar1 == (long *)0x0) {
        return;
      }
      goto LAB_04f94a70;
    }
  }
  *(long **)(this + 0x180) = plVar1;
LAB_04f94a70:
  (**(code **)(*plVar1 + 0x3d0))();
  return;
}


/* DMenu::onTouchEnded(Sexy::Touch const&) */

void __thiscall DMenu::onTouchEnded(DMenu *this,Touch *param_1)

{
  if (*(int *)(this + 0x188) == 0) {
    return;
  }
  DRef::ref((DRef *)this);
  if (*(long **)(this + 0x178) == (long *)0x0) {
    if (*(code **)(*(long *)this + 0x368) != handleTouchEnded) {
      (**(code **)(*(long *)this + 0x368))(this,param_1);
    }
  }
  else {
    (**(code **)(**(long **)(this + 0x178) + 0x3d8))();
    (**(code **)(**(long **)(this + 0x178) + 0x3f0))(*(long **)(this + 0x178),param_1);
  }
  *(undefined4 *)(this + 0x188) = 0;
  setRadio(this);
  DRef::unref((DRef *)this);
  return;
}


/* non-virtual thunk to DMenu::onTouchEnded(Sexy::Touch const&) */

void __thiscall DMenu::onTouchEnded(DMenu *this,Touch *param_1)

{
  onTouchEnded(this + -0x150,param_1);
  return;
}


/* DMenu::onTouchCancelled(Sexy::Touch const&) */

void __thiscall DMenu::onTouchCancelled(DMenu *this,Touch *param_1)

{
  if (*(int *)(this + 0x188) == 0) {
    return;
  }
  DRef::ref((DRef *)this);
  if (*(long **)(this + 0x178) == (long *)0x0) {
    if (*(code **)(*(long *)this + 0x370) != handleTouchCancelled) {
      (**(code **)(*(long *)this + 0x370))(this,param_1);
    }
  }
  else {
    (**(code **)(**(long **)(this + 0x178) + 0x3d8))();
  }
  *(undefined4 *)(this + 0x188) = 0;
  setRadio(this);
  DRef::unref((DRef *)this);
  return;
}


/* non-virtual thunk to DMenu::onTouchCancelled(Sexy::Touch const&) */

void __thiscall DMenu::onTouchCancelled(DMenu *this,Touch *param_1)

{
  onTouchCancelled(this + -0x150,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DMenu::align(int, float, float, float, float) */

void __thiscall
DMenu::align(DMenu *this,int param_1,float param_2,float param_3,float param_4,float param_5)

{
  int iVar1;
  DArray<DTransformNode*> *this_00;
  long *plVar2;
  long lVar3;
  float *pfVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_28;
  float local_24;
  float local_20 [2];
  undefined1 auStack_18 [4];
  float local_14;
  float local_10;
  float local_c;
  long local_8;
  
  lVar5 = *(long *)this;
  lVar7 = (long)param_1;
  local_8 = ___stack_chk_guard;
  if (*(code **)(lVar5 + 0x228) == DTransformNode::getChildren) {
    this_00 = (DArray<DTransformNode*> *)DTransformNode::getChildren((DTransformNode *)this);
  }
  else {
    this_00 = (DArray<DTransformNode*> *)(**(code **)(lVar5 + 0x228))();
    lVar5 = *(long *)this;
  }
  (**(code **)(lVar5 + 0x218))((DVec2 *)&local_10,this);
  fVar8 = local_10 - param_2;
  lVar5 = 0;
  while( true ) {
    lVar3 = DArray<DTransformNode*>::size(this_00);
    if (lVar3 <= lVar5) break;
    plVar2 = (long *)DArray<DTransformNode*>::at((long)this_00);
    pfVar4 = (float *)(**(code **)(*plVar2 + 0x200))();
    fVar11 = *pfVar4;
    fVar9 = (float)(**(code **)(*plVar2 + 0x1d0))(plVar2);
    fVar9 = (float)Sexy::SexyMath::Fabs(fVar9);
    (**(code **)(*plVar2 + 0x218))((DVec2 *)&local_10,plVar2);
    fVar11 = fVar11 * local_10;
    lVar3 = (**(code **)(*plVar2 + 0x200))(plVar2);
    fVar12 = *(float *)(lVar3 + 4);
    fVar10 = (float)(**(code **)(*plVar2 + 0x1d8))(plVar2);
    fVar10 = (float)Sexy::SexyMath::Fabs(fVar10);
    (**(code **)(*plVar2 + 0x218))((DVec2 *)&local_10,plVar2);
    iVar1 = 0;
    if (param_1 != 0) {
      iVar1 = (int)lVar5 / param_1;
    }
    (**(code **)(*plVar2 + 0x110))
              ((fVar8 - (float)(param_1 + -1) * (param_2 + param_4)) * 0.5 +
               (param_2 + param_4) * (float)((int)lVar5 - iVar1 * param_1) + fVar9 * fVar11,
               param_5 + (param_3 + param_5) * (float)iVar1 + fVar10 * fVar12 * local_c,plVar2);
    lVar5 = lVar5 + 1;
  }
  lVar5 = 0;
  if (lVar7 != 0) {
    lVar5 = lVar3 / lVar7;
  }
  pcVar6 = *(code **)(*(long *)this + 0x210);
  if (0 < lVar3 - lVar5 * lVar7) {
    lVar5 = lVar5 + 1;
  }
  (**(code **)(*(long *)this + 0x218))(local_20,this);
  (**(code **)(*(long *)this + 0x218))(auStack_18,this);
  local_24 = param_5 * 0.5 + (param_3 + param_5) * (float)lVar5;
  local_28 = local_14;
  pfVar4 = eastl::max_alt<float>(&local_28,&local_24);
  DVec2::DVec2((DVec2 *)&local_10,local_20[0],*pfVar4);
  (*pcVar6)(this,(DVec2 *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DMenu::addButtons(std::vector<DButton*, std::allocator<DButton*> > const&) */

void __thiscall DMenu::addButtons(DMenu *this,vector *param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_04f94e4c(*(undefined8 *)param_1);
  local_10 = FUN_04f94e9c(*(undefined8 *)(param_1 + 8));
  iVar3 = 0;
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    (**(code **)(*(long *)this + 0x28))(this,*puVar2,iVar3);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    iVar3 = iVar3 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DMenu::getItemForTouch(Sexy::Touch const&, std::string const&) */

void __thiscall DMenu::getItemForTouch(DMenu *this,Touch *param_1,string *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  DTouchLayer *this_00;
  long *plVar4;
  string *psVar5;
  DArray<DTransformNode*> *this_01;
  float local_30;
  float local_2c;
  reverse_iterator<__gnu_cxx::__normal_iterator<DTransformNode*const*,std::vector<DTransformNode*,std::allocator<DTransformNode*>>>>
  arStack_28 [8];
  float local_20;
  float local_1c;
  TRect<float> aTStack_18 [16];
  long local_8;
  
  this_01 = (DArray<DTransformNode*> *)(this + 0xa0);
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0xb0))(&local_30);
  cVar1 = DArray<DTransformNode*>::empty(this_01);
  if (cVar1 == '\0') {
    DArray<DTransformNode*>::crbegin(this_01);
    while( true ) {
      DArray<DTransformNode*>::crend(this_01);
      bVar2 = std::operator!=(arStack_28,aTStack_18);
      if (!bVar2) break;
      puVar3 = (undefined8 *)
               std::
               reverse_iterator<__gnu_cxx::__normal_iterator<DTransformNode*const*,std::vector<DTransformNode*,std::allocator<DTransformNode*>>>>
               ::operator*(arStack_28);
      if (((DTransformNode *)*puVar3 == (DTransformNode *)0x0) ||
         (cVar1 = DTransformNode::isNoCast((DTransformNode *)*puVar3), cVar1 == '\0')) {
        puVar3 = (undefined8 *)
                 std::
                 reverse_iterator<__gnu_cxx::__normal_iterator<DTransformNode*const*,std::vector<DTransformNode*,std::allocator<DTransformNode*>>>>
                 ::operator*(arStack_28);
        psVar5 = (string *)*puVar3;
        if ((psVar5 != (string *)0x0) &&
           (((cVar1 = (**(code **)(*(long *)psVar5 + 0xe0))(psVar5), cVar1 != '\0' &&
             (cVar1 = (**(code **)(*(long *)psVar5 + 0x330))(psVar5), cVar1 != '\0')) &&
            (cVar1 = (**(code **)(*(long *)psVar5 + 0x340))(psVar5), cVar1 != '\0')))) {
          cVar1 = FUN_0547419c(param_2);
          if ((cVar1 == '\0') &&
             (this_00 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar5),
             this_00 != (DTouchLayer *)0x0)) {
            if (*(code **)(*(long *)this_00 + 0x238) == DTransformNode::getParent) {
              plVar4 = (long *)DTransformNode::getParent((DTransformNode *)this_00);
            }
            else {
              plVar4 = (long *)(**(code **)(*(long *)this_00 + 0x238))();
            }
            (**(code **)(*plVar4 + 0xb0))(&local_20,plVar4,param_1);
            (**(code **)(*(long *)this_00 + 0x3c8))(aTStack_18,this_00);
            cVar1 = Sexy::TRect<float>::Contains(aTStack_18,local_20,local_1c);
            if (cVar1 != '\0') goto LAB_04f95864;
          }
          (**(code **)(*(long *)psVar5 + 0x3c8))(aTStack_18,psVar5);
          cVar1 = Sexy::TRect<float>::Contains(aTStack_18,local_30,local_2c);
          this_00 = (DTouchLayer *)psVar5;
          if (cVar1 != '\0') goto LAB_04f95864;
        }
      }
      std::
      reverse_iterator<__gnu_cxx::__normal_iterator<DTransformNode*const*,std::vector<DTransformNode*,std::allocator<DTransformNode*>>>>
      ::operator++(arStack_28);
    }
  }
  this_00 = (DTouchLayer *)0x0;
LAB_04f95864:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this_00);
  }
  return;
}


/* DMenu::onTouchBegan(Sexy::Touch const&) */

ulong __thiscall DMenu::onTouchBegan(DMenu *this,Touch *param_1)

{
  DMenu DVar1;
  char cVar2;
  byte bVar3;
  long *plVar4;
  DTransformNode *this_00;
  ulong uVar5;
  
  cVar2 = (**(code **)(*(long *)this + 0xe0))();
  if (((cVar2 == '\0') || (DVar1 = this[0x174], (byte)DVar1 == 0)) || (*(int *)(this + 0x188) != 0))
  {
LAB_04f958d8:
    uVar5 = 0;
  }
  else {
    for (this_00 = *(DTransformNode **)(this + 0x98); this_00 != (DTransformNode *)0x0;
        this_00 = (DTransformNode *)(**(code **)(*(long *)this_00 + 0x238))(this_00)) {
      while( true ) {
        cVar2 = (**(code **)(*(long *)this_00 + 0xe0))(this_00);
        if (cVar2 == '\0') goto LAB_04f958d8;
        if (*(code **)(*(long *)this_00 + 0x238) != DTransformNode::getParent) break;
        this_00 = (DTransformNode *)DTransformNode::getParent(this_00);
        if (this_00 == (DTransformNode *)0x0) goto LAB_04f95944;
      }
    }
LAB_04f95944:
    plVar4 = (long *)getItemForTouch(this,param_1,(string *)(this + 400));
    *(long **)(this + 0x178) = plVar4;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x3f8))(plVar4,param_1);
      *(undefined4 *)(this + 0x188) = 1;
      setRadio(this);
      return (ulong)(uint)(byte)DVar1;
    }
    if (*(code **)(*(long *)this + 0x358) == handleTouchBegan) {
      uVar5 = handleTouchBegan((Touch *)this);
      return uVar5;
    }
    bVar3 = (**(code **)(*(long *)this + 0x358))(this,param_1);
    uVar5 = (ulong)bVar3;
  }
  return uVar5;
}


/* non-virtual thunk to DMenu::onTouchBegan(Sexy::Touch const&) */

void __thiscall DMenu::onTouchBegan(DMenu *this,Touch *param_1)

{
  onTouchBegan(this + -0x150,param_1);
  return;
}


/* DMenu::onTouchMoved(Sexy::Touch const&) */

void __thiscall DMenu::onTouchMoved(DMenu *this,Touch *param_1)

{
  char cVar1;
  DButton *this_00;
  long *plVar2;
  long *plVar3;
  
  if (*(int *)(this + 0x188) == 0) {
    return;
  }
  this_00 = *(DButton **)(this + 0x178);
  if (this_00 == (DButton *)0x0) {
LAB_04f95a68:
    plVar3 = (long *)getItemForTouch(this,param_1,(string *)(this + 400));
    plVar2 = *(long **)(this + 0x178);
    if (plVar2 != plVar3) {
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x3d8))();
      }
      *(long **)(this + 0x178) = plVar3;
      if (plVar3 == (long *)0x0) goto LAB_04f95acc;
      (**(code **)(*plVar3 + 0x3f8))(plVar3,param_1);
      plVar2 = *(long **)(this + 0x178);
    }
  }
  else {
    if (*(code **)(*(long *)this_00 + 0x3c0) == DButton::isTouchMode) {
      cVar1 = DButton::isTouchMode(this_00);
    }
    else {
      cVar1 = (**(code **)(*(long *)this_00 + 0x3c0))();
    }
    if (cVar1 == '\0') goto LAB_04f95a68;
    (**(code **)(**(long **)(this + 0x178) + 0x400))(*(long **)(this + 0x178),param_1);
    plVar2 = *(long **)(this + 0x178);
  }
  if (plVar2 != (long *)0x0) {
    return;
  }
LAB_04f95acc:
  if (*(code **)(*(long *)this + 0x360) != handleTouchMoved) {
    (**(code **)(*(long *)this + 0x360))(this,param_1);
  }
  return;
}


/* non-virtual thunk to DMenu::onTouchMoved(Sexy::Touch const&) */

void __thiscall DMenu::onTouchMoved(DMenu *this,Touch *param_1)

{
  onTouchMoved(this + -0x150,param_1);
  return;
}


/* DMenu::onTouchLongPress(Sexy::Touch const&) */

void __thiscall DMenu::onTouchLongPress(DMenu *this,Touch *param_1)

{
  char cVar1;
  long *plVar2;
  DTransformNode *this_00;
  
  cVar1 = (**(code **)(*(long *)this + 0xe0))();
  if ((cVar1 != '\0') && (this[0x174] != (DMenu)0x0)) {
    for (this_00 = *(DTransformNode **)(this + 0x98); this_00 != (DTransformNode *)0x0;
        this_00 = (DTransformNode *)(**(code **)(*(long *)this_00 + 0x238))(this_00)) {
      while( true ) {
        cVar1 = (**(code **)(*(long *)this_00 + 0xe0))(this_00);
        if (cVar1 == '\0') {
          return;
        }
        if (*(code **)(*(long *)this_00 + 0x238) != DTransformNode::getParent) break;
        this_00 = (DTransformNode *)DTransformNode::getParent(this_00);
        if (this_00 == (DTransformNode *)0x0) goto LAB_04f95b88;
      }
    }
LAB_04f95b88:
    plVar2 = (long *)getItemForTouch(this,param_1,(string *)(this + 400));
    *(long **)(this + 0x178) = plVar2;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x408))(plVar2,param_1);
      return;
    }
  }
  return;
}


/* non-virtual thunk to DMenu::onTouchLongPress(Sexy::Touch const&) */

void __thiscall DMenu::onTouchLongPress(DMenu *this,Touch *param_1)

{
  onTouchLongPress(this + -0x150,param_1);
  return;
}

