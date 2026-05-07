// Class: LevelOfTheDay_Rewards


/* LevelOfTheDay_Rewards::Pick_RandomReward(std::vector<TheDayRewardItem const*,
   std::allocator<TheDayRewardItem const*> >&) */

undefined8 LevelOfTheDay_Rewards::Pick_RandomReward(vector *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::front
                     ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *
                      )param_1);
  return *puVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDay_Rewards::CreateStandaloneEffectForReward(StandaloneEffectFactory&, TheDayRewardItem
   const*) */

void LevelOfTheDay_Rewards::CreateStandaloneEffectForReward
               (StandaloneEffectFactory *param_1,TheDayRewardItem *param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  RenaissanceChallengeNewManager *this;
  char *pcVar5;
  RtClass *pRVar6;
  ResourceInfo *pRVar7;
  long *extraout_x0;
  string *psVar8;
  Effect_BouncingArrow *this_00;
  Board *this_01;
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  RtMixedPtrBase aRStack_20 [8];
  RtId aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (Effect_BouncingArrow *)0x0;
  switch(*(undefined4 *)(param_2 + 8)) {
  case 0:
    this_00 = (Effect_BouncingArrow *)
              StandaloneEffectFactory::CreateCenteredScreenSpaceEffectStaticImage(param_1);
    pcVar5 = "IMAGE_UI_LEVELOFTHEDAY_IMG_COIN_REWARD";
    goto LAB_049c665c;
  case 1:
    this_00 = (Effect_BouncingArrow *)
              StandaloneEffectFactory::CreateCenteredScreenSpaceEffectStaticImage(param_1);
    pcVar5 = "IMAGE_UI_LEVELOFTHEDAY_IMG_GEM_REWARD";
    goto LAB_049c665c;
  case 2:
    this_00 = (Effect_BouncingArrow *)
              StandaloneEffectFactory::CreateCenteredScreenSpaceEffectPopAnim(param_1);
    psVar8 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar8);
    this_01 = *(Board **)(gLawnApp + 0x9f0);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    Board::LoadResourceGroupForGameplay(this_01,(string *)(lVar4 + 0x10));
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    pcVar5 = (char *)FUN_0547429c(lVar4 + 0x18);
    pRVar6 = (RtClass *)Sexy::RtClass::StaticGetClassNamed(pcVar5);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    GetPAMByName((string *)(lVar4 + 0x20));
    pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_10);
    Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this_00,(PopAnim *)pRVar7,pRVar6);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    UIWidget::GetAtlasImage((UIWidget *)this_00);
    nop();
    (**(code **)(*extraout_x0 + 0x1a0))();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    break;
  case 3:
    this_00 = (Effect_BouncingArrow *)0x0;
    FUN_05475d88(asStack_40);
    bVar1 = std::operator!=(asStack_40,"");
    if (bVar1) {
      std::string::string(asStack_38,"plant_piece_");
      nop();
      FUN_05475d88(asStack_30,asStack_40);
      FUN_031dcc6c(asStack_28,asStack_38,asStack_30);
      psVar8 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr()
      ;
      ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar8);
      cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_20);
      if (cVar2 != '\0') {
        this_00 = (Effect_BouncingArrow *)
                  StandaloneEffectFactory::CreateCenteredScreenSpaceEffectStaticImage(param_1);
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
        lVar4 = StringHelper::ToImage((string *)(lVar4 + 0x60),false);
        if (lVar4 == 0) {
          std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                    ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)asStack_10);
          Effect_BouncingArrow::SetArrowImage(this_00,(RtWeakPtr<Sexy::SoundResource> *)asStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
        }
        else {
          Sexy::BaseResource::GetRtId();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_18);
          Effect_BouncingArrow::SetArrowImage(this_00,(RtWeakPtr<Sexy::SoundResource> *)asStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
          Sexy::RtId::~RtId(aRStack_18);
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      std::string::~string(asStack_28);
      std::string::~string(asStack_30);
      std::string::~string(asStack_38);
    }
    std::string::~string(asStack_40);
    break;
  case 4:
    this_00 = (Effect_BouncingArrow *)0x0;
    FUN_05475d88(asStack_30);
    bVar1 = std::operator!=(asStack_30,"");
    if (bVar1) {
      FUN_031f5e7c(asStack_28,"avatar_piece_",asStack_30);
      psVar8 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr()
      ;
      ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar8);
      cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_20);
      if (cVar2 != '\0') {
        this_00 = (Effect_BouncingArrow *)
                  StandaloneEffectFactory::CreateCenteredScreenSpaceEffectStaticImage(param_1);
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
        lVar4 = StringHelper::ToImage((string *)(lVar4 + 0x60),false);
        if (lVar4 == 0) {
          std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                    ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)asStack_10);
          Effect_BouncingArrow::SetArrowImage
                    (this_00,(_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                             asStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
        }
        else {
          Sexy::BaseResource::GetRtId();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_18);
          Effect_BouncingArrow::SetArrowImage(this_00,(RtWeakPtr<Sexy::SoundResource> *)asStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
          Sexy::RtId::~RtId(aRStack_18);
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      std::string::~string(asStack_28);
    }
    std::string::~string(asStack_30);
    break;
  case 5:
    this_00 = (Effect_BouncingArrow *)
              StandaloneEffectFactory::CreateCenteredScreenSpaceEffectStaticImage(param_1);
    pcVar5 = "IMAGE_UI_LEVELOFTHEDAY_IMG_COIN2018_REWARD";
LAB_049c665c:
    std::string::string(asStack_10,pcVar5);
    lVar4 = StringHelper::ToImage(asStack_10,false);
    std::string::~string(asStack_10);
    nop();
joined_r0x049c6774:
    if (lVar4 == 0) {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)asStack_10);
      Effect_BouncingArrow::SetArrowImage
                (this_00,(_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                         asStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    }
    else {
      Sexy::BaseResource::GetRtId();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_18);
      Effect_BouncingArrow::SetArrowImage(this_00,(RtWeakPtr<Sexy::SoundResource> *)asStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      Sexy::RtId::~RtId(aRStack_18);
    }
    break;
  case 6:
    this_00 = (Effect_BouncingArrow *)
              StandaloneEffectFactory::CreateCenteredScreenSpaceEffectStaticImage(param_1);
    std::string::string(asStack_10,"IMAGE_UI_LEVELOFTHEDAY_IMG_STATUE2019_REWARD");
    lVar4 = StringHelper::ToImage(asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    this = (RenaissanceChallengeNewManager *)
           Sexy::LazySingleton<RenaissanceChallengeNewManager>::GetInstance();
    uVar3 = RenaissanceChallengeNewManager::GetResourceId(this);
    if (0 < (int)uVar3) {
      Sexy::StrFormat("IMAGE_UI_LEVELOFTHEDAY_IMG_STATUE2019_REWARD_%d",asStack_10,(ulong)uVar3);
      lVar4 = StringHelper::ToImage(asStack_10,false);
      std::string::~string(asStack_10);
    }
    goto joined_r0x049c6774;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDay_Rewards::CreateFloatingRewardText(TheDayRewardItem const*, Sexy::SexyVector2) */

void LevelOfTheDay_Rewards::CreateFloatingRewardText(float param_1,float param_2)

{
  int iVar1;
  int iVar2;
  Effect_FloatingText *this;
  code *pcVar3;
  float fVar4;
  float local_68;
  float fStack_64;
  Vec3 aVStack_58 [4];
  float local_54;
  Vec3 aVStack_48 [16];
  PIInterpolator aPStack_38 [24];
  Point aPStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_68 = param_1;
  fStack_64 = param_2;
  this = GameObject::Create<Effect_FloatingText>();
  TheDayRewardItem::GetDisplayText();
  Effect_FloatingText::SetText((wstring *)this);
  FUN_05476c50(aPStack_20);
  iVar1 = FUN_049c654c(0xfa);
  iVar2 = FUN_049c654c(0x42);
  Sexy::Point::Point(aPStack_20,iVar1,iVar2);
  Effect_FloatingText::SetTextAsParagraph(this,aPStack_20);
  Effect_FloatingText::SetStyle(this,5);
  pcVar3 = *(code **)(*(long *)this + 0x78);
  Sexy::Color::Color((Color *)aPStack_20,1);
  (*pcVar3)(this,aPStack_20);
  Effect_FloatingText::SetDuration(this,1.6);
  Effect_FloatingText::SetFadeInDuration(this,0.2);
  PresentDisplayRect::SetPAMScale((PresentDisplayRect *)this,0.8);
  StandaloneEffect::SetIsScreenSpaceEffect((StandaloneEffect *)this,true);
  StandaloneEffect::SetScreenSpaceOrigin((StandaloneEffect *)this,(SexyVector2 *)&local_68,1000000);
  EATextSquish::Vec3::Vec3(aVStack_58,local_68,fStack_64,0.0);
  Sexy::PIInterpolator::PIInterpolator(aPStack_38);
  fVar4 = (float)PVZ_T();
  CurveSequence<Sexy::SexyVector3>::StartSequence
            ((CurveSequence<Sexy::SexyVector3> *)aPStack_38,fVar4,(SexyVector3 *)aVStack_58);
  fVar4 = (float)FUN_049c6560(0xc2200000);
  local_54 = fVar4 + local_54;
  CurveSequence<Sexy::SexyVector3>::AddCurve
            ((CurveSequence<Sexy::SexyVector3> *)0x3f1c740a,aPStack_38,aVStack_58,3);
  fVar4 = (float)FUN_049c6560(0x42a00000);
  local_54 = fVar4 + local_54;
  CurveSequence<Sexy::SexyVector3>::AddCurve
            ((CurveSequence<Sexy::SexyVector3> *)0x3f7d2590,aPStack_38,aVStack_58,2);
  Effect_FloatingText::SetPositionCurve(this,(CurveSequence *)aPStack_38,true);
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)aPStack_20);
  fVar4 = (float)PVZ_T();
  EATextSquish::Vec3::Vec3(aVStack_48,0.1,0.1,0.0);
  CurveSequence<Sexy::SexyVector3>::StartSequence
            ((CurveSequence<Sexy::SexyVector3> *)aPStack_20,fVar4,(SexyVector3 *)aVStack_48);
  EATextSquish::Vec3::Vec3(aVStack_48,1.2,1.2,0.0);
  CurveSequence<Sexy::SexyVector3>::AddCurve
            ((CurveSequence<Sexy::SexyVector3> *)0x3e23d70b,aPStack_20,aVStack_48,3);
  EATextSquish::Vec3::Vec3(aVStack_48,0.7,0.7,0.0);
  CurveSequence<Sexy::SexyVector3>::AddCurve
            ((CurveSequence<Sexy::SexyVector3> *)0x3fb851eb,aPStack_20,aVStack_48,4);
  Effect_FloatingText::SetScaleCurve(this,(CurveSequence *)aPStack_20);
  CurveSequence<Sexy::SexyVector3>::~CurveSequence((CurveSequence<Sexy::SexyVector3> *)aPStack_20);
  CurveSequence<Sexy::SexyVector3>::~CurveSequence((CurveSequence<Sexy::SexyVector3> *)aPStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}

