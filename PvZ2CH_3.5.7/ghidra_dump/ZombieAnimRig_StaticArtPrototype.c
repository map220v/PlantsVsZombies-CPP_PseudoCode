// Class: ZombieAnimRig_StaticArtPrototype


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_StaticArtPrototype::onPopAnimInitialized() */

void __thiscall
ZombieAnimRig_StaticArtPrototype::onPopAnimInitialized(ZombieAnimRig_StaticArtPrototype *this)

{
  bool bVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieAnimRig::onPopAnimInitialized((ZombieAnimRig *)this);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_18,1.0,1.0);
  *(undefined8 *)(this + 0x248) = local_18;
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,(string *)&DAT_06b190b8,false);
  Sexy::Color::Color((Color *)&local_18,1);
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined8 *)(this + 0x250) = local_18;
  *(undefined8 *)(this + 600) = uStack_10;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_StaticArtPrototype::StaticGetClass() */

long * ZombieAnimRig_StaticArtPrototype::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = ZombieAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_StaticArtPrototype",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_StaticArtPrototype::GetClass() const */

long * ZombieAnimRig_StaticArtPrototype::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = ZombieAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_StaticArtPrototype",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_StaticArtPrototype::SetImageScale(Sexy::SexyVector2) */

void ZombieAnimRig_StaticArtPrototype::SetImageScale
               (undefined4 param_1,undefined4 param_2,long param_3)

{
  *(ulong *)(param_3 + 0x248) = CONCAT44(param_2,param_1);
  return;
}


/* ZombieAnimRig_StaticArtPrototype::SetColor(Sexy::Color) */

void __thiscall
ZombieAnimRig_StaticArtPrototype::SetColor
          (ZombieAnimRig_StaticArtPrototype *this,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(this + 0x250) = *param_2;
  *(undefined8 *)(this + 600) = uVar1;
  return;
}


/* ZombieAnimRig_StaticArtPrototype::~ZombieAnimRig_StaticArtPrototype() */

void __thiscall
ZombieAnimRig_StaticArtPrototype::~ZombieAnimRig_StaticArtPrototype
          (ZombieAnimRig_StaticArtPrototype *this)

{
  *(undefined ***)this = &PTR_GetClass_06873ad0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_StaticArtPrototype_06873d48;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x240));
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_StaticArtPrototype::~ZombieAnimRig_StaticArtPrototype() */

void __thiscall
ZombieAnimRig_StaticArtPrototype::~ZombieAnimRig_StaticArtPrototype
          (ZombieAnimRig_StaticArtPrototype *this)

{
  ~ZombieAnimRig_StaticArtPrototype(this + -0x10);
  return;
}


/* ZombieAnimRig_StaticArtPrototype::~ZombieAnimRig_StaticArtPrototype() */

void __thiscall
ZombieAnimRig_StaticArtPrototype::~ZombieAnimRig_StaticArtPrototype
          (ZombieAnimRig_StaticArtPrototype *this)

{
  ~ZombieAnimRig_StaticArtPrototype(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_StaticArtPrototype::~ZombieAnimRig_StaticArtPrototype() */

void __thiscall
ZombieAnimRig_StaticArtPrototype::~ZombieAnimRig_StaticArtPrototype
          (ZombieAnimRig_StaticArtPrototype *this)

{
  ~ZombieAnimRig_StaticArtPrototype(this + -0x10);
  return;
}


/* ZombieAnimRig_StaticArtPrototype::ZombieAnimRig_StaticArtPrototype() */

void __thiscall
ZombieAnimRig_StaticArtPrototype::ZombieAnimRig_StaticArtPrototype
          (ZombieAnimRig_StaticArtPrototype *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06873ad0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_StaticArtPrototype_06873d48;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x240));
  Sexy::FastCurve::SetOutRange((FastCurve *)(this + 0x248),1.0,1.0);
  Sexy::Color::Color((Color *)(this + 0x250));
  return;
}


/* ZombieAnimRig_StaticArtPrototype::StaticNew() */

ZombieAnimRig_StaticArtPrototype * ZombieAnimRig_StaticArtPrototype::StaticNew(void)

{
  ZombieAnimRig_StaticArtPrototype *this;
  
  this = ::operator_new(0x260);
  ZombieAnimRig_StaticArtPrototype(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_StaticArtPrototype::onPostDraw(Sexy::Graphics*) */

void __thiscall
ZombieAnimRig_StaticArtPrototype::onPostDraw
          (ZombieAnimRig_StaticArtPrototype *this,Graphics *param_1)

{
  char cVar1;
  bool bVar2;
  ResourceInfo *pRVar3;
  long lVar4;
  undefined8 *puVar5;
  Insets *pIVar6;
  Insets aIStack_d8 [16];
  SexyMatrix3 aSStack_c8 [40];
  SexyMatrix3 local_a0 [40];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  Transform aTStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x240));
  if (pRVar3 != (ResourceInfo *)0x0) {
    cVar1 = PopAnimRig::CalcLayerTransformScreenSpace
                      ((PopAnimRig *)this,(string *)&DAT_06b190b8,aSStack_c8);
    if (cVar1 != '\0') {
      lVar4 = FUN_0460df5c(*(undefined8 *)(this + 0x20));
      Sexy::SexyMatrix3::operator*((SexyMatrix3 *)(lVar4 + 0x6c),aSStack_c8);
      Sexy::Transform::Transform(aTStack_50);
      Sexy::Transform::Translate(aTStack_50,0.0,(float)-(*(int *)(pRVar3 + 0x3c) / 2));
      Sexy::Transform::Scale(aTStack_50,*(float *)(this + 0x248),*(float *)(this + 0x24c));
      puVar5 = (undefined8 *)Sexy::Transform::GetMatrix(aTStack_50);
      local_78 = *puVar5;
      uStack_70 = puVar5[1];
      local_68 = puVar5[2];
      uStack_60 = puVar5[3];
      local_58 = *(undefined4 *)(puVar5 + 4);
      Sexy::SexyMatrix3::operator*(local_a0,(SexyMatrix3 *)&local_78);
      bVar2 = (bool)Sexy::Graphics::GetColorizeImages(param_1);
      pIVar6 = (Insets *)PVPManager::GetSkillDatas((PVPManager *)param_1);
      Sexy::Insets::Insets(aIStack_d8,pIVar6);
      Sexy::Graphics::SetColor(param_1,(Color *)(this + 0x250));
      Sexy::Graphics::SetColorizeImages(param_1,true);
      Sexy::Graphics::DrawImageMatrix(param_1,(Image *)pRVar3,local_a0,0.0,0.0);
      Sexy::Graphics::SetColor(param_1,(Color *)aIStack_d8);
      Sexy::Graphics::SetColorizeImages(param_1,bVar2);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

