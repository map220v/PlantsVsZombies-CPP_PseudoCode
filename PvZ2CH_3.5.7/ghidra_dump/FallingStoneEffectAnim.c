// Class: FallingStoneEffectAnim


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FallingStoneEffectAnim::StaticClassInit() */

void FallingStoneEffectAnim::StaticClassInit(void)

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
    std::string::string(asStack_10,"FallingStoneEffectAnim");
    (*pcVar2)(plVar1,asStack_10,FUN_04219d10,0x120,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FallingStoneEffectAnim::StaticGetClass() */

long * FallingStoneEffectAnim::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"FallingStoneEffectAnim",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FallingStoneEffectAnim::GetClass() const */

long * FallingStoneEffectAnim::GetClass(void)

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
  (*pcVar3)(plVar1,"FallingStoneEffectAnim",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FallingStoneEffectAnim::SetEntity(Sexy::RtWeakPtr<BoardEntity>, Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall
FallingStoneEffectAnim::SetEntity
          (FallingStoneEffectAnim *this,RtWeakPtr *param_2,RtWeakPtr *param_3)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x110),param_2);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x118),param_3);
  return;
}


/* FallingStoneEffectAnim::FallingStoneEffectAnim() */

void __thiscall FallingStoneEffectAnim::FallingStoneEffectAnim(FallingStoneEffectAnim *this)

{
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined ***)this = &PTR_GetClass_0680dc00;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x110));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x118));
  return;
}


/* FallingStoneEffectAnim::StaticNew() */

FallingStoneEffectAnim * FallingStoneEffectAnim::StaticNew(void)

{
  FallingStoneEffectAnim *this;
  
  this = ::operator_new(0x120);
  FallingStoneEffectAnim(this);
  return this;
}


/* FallingStoneEffectAnim::~FallingStoneEffectAnim() */

void __thiscall FallingStoneEffectAnim::~FallingStoneEffectAnim(FallingStoneEffectAnim *this)

{
  *(undefined ***)this = &PTR_GetClass_0680dc00;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x118));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x110));
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* FallingStoneEffectAnim::~FallingStoneEffectAnim() */

void __thiscall FallingStoneEffectAnim::~FallingStoneEffectAnim(FallingStoneEffectAnim *this)

{
  ~FallingStoneEffectAnim(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FallingStoneEffectAnim::onAnimStopped(std::string const&) */

void __thiscall FallingStoneEffectAnim::onAnimStopped(FallingStoneEffectAnim *this,string *param_1)

{
  RtMixedPtrBase *this_00;
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  SharkMinion *pSVar8;
  Plant *this_01;
  PlantIceShroom *this_02;
  long *extraout_x0;
  undefined8 extraout_x0_00;
  undefined8 *puVar9;
  ResourceInfo *pRVar10;
  long *extraout_x0_01;
  Plant *this_03;
  FireShroomMagma *this_04;
  code *pcVar11;
  Board *this_05;
  RtWeakPtr<Sexy::ResourceInfo> *this_06;
  ResourceInfo *pRVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_a0;
  undefined8 local_98;
  int local_90;
  int local_8c;
  undefined4 local_88;
  undefined4 local_84;
  string asStack_80 [24];
  ResourceInfo *local_68;
  float local_60;
  undefined8 local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Effect_PopAnim::onAnimStopped((string *)this);
  bVar1 = std::operator==("ANIM_STAGE4_IN",param_1);
  if (bVar1) {
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x118));
  }
  else {
    bVar1 = std::operator==("ANIM_STAGE5_IN",param_1);
    if (!bVar1) goto LAB_0421b4f0;
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x118));
  }
  if (cVar2 != '\0') {
    this_06 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x118);
    this_00 = (RtMixedPtrBase *)(this + 0x110);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this_00);
    if (cVar2 != '\0') {
      DamageInfo::DamageInfo((DamageInfo *)&local_68);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_80);
      uVar3 = operator|(4,2);
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_06);
      local_84 = *(undefined4 *)(lVar7 + 0x1c);
      local_88 = FUN_04218534(*(undefined4 *)(lVar7 + 0x18),local_84,*(undefined4 *)(lVar7 + 0x20));
      iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
      pSVar8 = (SharkMinion *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_06);
      iVar5 = SharkMinion::getRow(pSVar8);
      pSVar8 = (SharkMinion *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_06);
      iVar6 = SharkMinion::getRow(pSVar8);
      EntityFinder::GetEntitiesTouchingCircle2D
                ((float)iVar4 * 1.44,
                 (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_80,uVar3,
                 (RtWeakPtr<Sexy::SoundResource> *)&local_88,iVar5 + -1,iVar6 + 1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      nop();
      nop();
      fVar14 = (float)FUN_04218414(*(undefined4 *)(this_01 + 0xf4),*(undefined4 *)(this_01 + 0x100),
                                   *(undefined4 *)(this_01 + 0x104),*(undefined4 *)(this_01 + 0x3b8)
                                  );
      fVar16 = (float)FUN_04218424(*(undefined4 *)(this_01 + 0x3bc));
      fVar13 = (float)Plant::GetExtraDPSmodifier(this_01);
      fVar15 = (float)FUN_0421842c(*(undefined4 *)(this_01 + 0x424));
      fVar15 = fVar16 * fVar14 * fVar13 * fVar15;
      lVar7 = PlantIceShroom::GetIceShroomProps(this_02);
      fVar14 = fVar15 * *(float *)(lVar7 + 0x2e8);
      lVar7 = PlantIceShroom::GetIceShroomProps(this_02);
      fVar15 = fVar15 * *(float *)(lVar7 + 0x2ec);
      bVar1 = std::operator==("ANIM_STAGE5_IN",param_1);
      if (bVar1) {
        fVar14 = fVar14 * 3.6;
        fVar15 = fVar15 * 3.6;
      }
      local_a0 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)asStack_80);
      local_98 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)asStack_80);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98),
            bVar1) {
        puVar9 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
        local_68 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_00);
        pRVar12 = (ResourceInfo *)*puVar9;
        local_58 = 0x400;
        pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_06);
        local_60 = fVar14;
        if (pRVar12 != pRVar10) {
          local_60 = fVar15;
        }
        bVar1 = Sexy::RtObject::IsA<GridItem>((RtObject *)*puVar9);
        if (bVar1) {
          nop();
          pcVar11 = *(code **)(*extraout_x0 + 0x210);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          nop();
          cVar2 = (*pcVar11)(extraout_x0,extraout_x0_00);
          if ((cVar2 != '\0') &&
             (cVar2 = (**(code **)(*extraout_x0 + 0x200))(extraout_x0), cVar2 != '\0'))
          goto LAB_0421b888;
        }
        else {
          bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)*puVar9);
          if (bVar1) {
            nop();
            pcVar11 = *(code **)(*extraout_x0_01 + 0x3d0);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            nop();
            Plant::GetType();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)&local_88,(RtWeakPtrBase *)&local_90);
            cVar2 = (*pcVar11)(extraout_x0_01,(RtWeakPtr<Sexy::SoundResource> *)&local_88,0);
            if (((cVar2 == '\0') ||
                (cVar2 = (**(code **)(*extraout_x0_01 + 0x328))(extraout_x0_01), cVar2 != '\0')) ||
               (cVar2 = (**(code **)(*extraout_x0_01 + 0x330))(extraout_x0_01), cVar2 != '\0')) {
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_88);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_90);
              goto LAB_0421b810;
            }
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_88);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_90);
          }
LAB_0421b888:
          (**(code **)(*(long *)*puVar9 + 0x110))((long *)*puVar9,(DamageInfo *)&local_68);
        }
LAB_0421b810:
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a0);
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)asStack_80);
      DamageInfo::~DamageInfo((DamageInfo *)&local_68);
    }
  }
LAB_0421b4f0:
  bVar1 = std::operator==("ANIM_STAGE5",param_1);
  if (bVar1) {
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x118));
    if (cVar2 != '\0') {
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x110));
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x118));
        BoardEntity::CalcGridPosition();
        cVar2 = FUN_04219ba0(&local_90);
        if (cVar2 != '\0') {
          this_05 = *(Board **)(gLawnApp + 0x9f0);
          std::string::string(asStack_80,"fireshroom_magma");
          Board::AddGridItem(this_05,asStack_80,local_90,local_8c,1);
          nop();
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_88,(RtWeakPtrBase *)&local_68);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
          std::string::~string(asStack_80);
          nop();
          bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_88);
          if (bVar1) {
            DamageInfo::DamageInfo((DamageInfo *)&local_68);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x110));
            nop();
            fVar14 = (float)FUN_04218414(*(undefined4 *)(this_03 + 0xf4),
                                         *(undefined4 *)(this_03 + 0x100),
                                         *(undefined4 *)(this_03 + 0x104),
                                         *(undefined4 *)(this_03 + 0x3b8));
            fVar15 = (float)FUN_04218424(*(undefined4 *)(this_03 + 0x3bc));
            fVar16 = (float)Plant::GetExtraDPSmodifier(this_03);
            local_60 = (float)FUN_0421842c(*(undefined4 *)(this_03 + 0x424));
            local_60 = fVar14 * fVar15 * 20.0 * fVar16 * local_60;
            local_58 = operator|(0x1000,0x400);
            this_04 = (FireShroomMagma *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)&local_88);
            FireShroomMagma::InitFire(this_04,(DamageInfo *)&local_68);
            DamageInfo::~DamageInfo((DamageInfo *)&local_68);
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_88);
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

