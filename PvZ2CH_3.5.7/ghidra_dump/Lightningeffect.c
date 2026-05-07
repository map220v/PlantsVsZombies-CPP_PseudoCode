// Class: Lightningeffect


/* Lightningeffect::SetRect(Sexy::TRect<int>) */

void __thiscall Lightningeffect::SetRect(Lightningeffect *this,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(this + 0x10c) = *param_2;
  *(undefined8 *)(this + 0x114) = uVar1;
  return;
}


/* Lightningeffect::SetInstigator(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall Lightningeffect::SetInstigator(Lightningeffect *this,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x120),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lightningeffect::StaticClassInit() */

void Lightningeffect::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"Lightningeffect");
    (*pcVar2)(plVar1,asStack_10,FUN_0403d50c,400,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Lightningeffect::StaticGetClass() */

long * Lightningeffect::StaticGetClass(void)

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
  uVar2 = Effect_PopAnim::StaticGetClass();
  (*pcVar3)(plVar1,"Lightningeffect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Lightningeffect::GetClass() const */

long * Lightningeffect::GetClass(void)

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
  uVar2 = Effect_PopAnim::StaticGetClass();
  (*pcVar3)(plVar1,"Lightningeffect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Lightningeffect::Lightningeffect() */

void __thiscall Lightningeffect::Lightningeffect(Lightningeffect *this)

{
  undefined4 uVar1;
  
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined ***)this = &PTR_GetClass_067bd150;
  Sexy::Insets::Insets((Insets *)(this + 0x10c));
  *(undefined4 *)(this + 0x11c) = 0x3f800000;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x120));
  DamageInfo::DamageInfo((DamageInfo *)(this + 0x128));
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x18c) = uVar1;
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0x120));
  return;
}


/* Lightningeffect::StaticNew() */

Lightningeffect * Lightningeffect::StaticNew(void)

{
  Lightningeffect *this;
  
  this = ::operator_new(400);
  Lightningeffect(this);
  return this;
}


/* Lightningeffect::~Lightningeffect() */

void __thiscall Lightningeffect::~Lightningeffect(Lightningeffect *this)

{
  *(undefined ***)this = &PTR_GetClass_067bd150;
  DamageInfo::~DamageInfo((DamageInfo *)(this + 0x128));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x120));
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* Lightningeffect::~Lightningeffect() */

void __thiscall Lightningeffect::~Lightningeffect(Lightningeffect *this)

{
  ~Lightningeffect(this);
  AK::FreeHook(this);
  return;
}


/* Lightningeffect::SetDamageProps(DamageInfo) */

void __thiscall Lightningeffect::SetDamageProps(Lightningeffect *this,DamageInfo *param_2)

{
  DamageInfo::operator=((DamageInfo *)(this + 0x128),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lightningeffect::onUpdate() */

void __thiscall Lightningeffect::onUpdate(Lightningeffect *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  Zombie *pZVar5;
  GridItem *pGVar6;
  RtObject *this_01;
  float fVar7;
  float fVar8;
  undefined8 local_90;
  undefined8 local_88;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  undefined8 local_68 [12];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Effect_PopAnim::onUpdate((Effect_PopAnim *)this);
  fVar8 = *(float *)(this + 0x18c);
  fVar7 = (float)PVZ_T();
  if (fVar8 <= fVar7) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
    this_00 = (RtWeakPtr *)(this + 0x120);
    uVar3 = operator|(4,2);
    EntityFinder::GetEntitiesInGridSquares(avStack_80,uVar3,this + 0x10c);
    local_90 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_80);
    local_88 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_90,(__normal_iterator *)&local_88), bVar1)
    {
      puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90)
      ;
      this_01 = (RtObject *)*puVar4;
      pZVar5 = Sexy::RtObject::Cast<Zombie>(this_01);
      if (((pZVar5 == (Zombie *)0x0) ||
          ((cVar2 = (**(code **)(*(long *)pZVar5 + 0xb8))(pZVar5,*(undefined4 *)(this + 0x188)),
           cVar2 != '\0' && (cVar2 = RealObject::IsOnOpposingTeam(pZVar5,1), cVar2 != '\0')))) &&
         ((pGVar6 = Sexy::RtObject::Cast<GridItem>(this_01), pGVar6 == (GridItem *)0x0 ||
          (cVar2 = (**(code **)(*(long *)pGVar6 + 0x200))(), cVar2 != '\0')))) {
        DamageInfo::DamageInfo((DamageInfo *)local_68,(DamageInfo *)(this + 0x128));
        bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
        if ((bVar1) &&
           (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00), cVar2 != '\0')) {
          local_68[0] = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        }
        (**(code **)(*(long *)this_01 + 0x110))(this_01,(DamageInfo *)local_68);
        DamageInfo::~DamageInfo((DamageInfo *)local_68);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_90);
    }
    fVar7 = (float)PVZ_T();
    *(float *)(this + 0x18c) = fVar7 + 0.1;
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

