// Class: PVZ2UIRewardAvatarObjectDisplayer


/* PVZ2UIRewardAvatarObjectDisplayer::~PVZ2UIRewardAvatarObjectDisplayer() */

void __thiscall
PVZ2UIRewardAvatarObjectDisplayer::~PVZ2UIRewardAvatarObjectDisplayer
          (PVZ2UIRewardAvatarObjectDisplayer *this)

{
  *(undefined ***)this = &PTR_GetClass_06839490;
  PVZ2UIRewardObjectDisplayer::~PVZ2UIRewardObjectDisplayer((PVZ2UIRewardObjectDisplayer *)this);
  return;
}


/* PVZ2UIRewardAvatarObjectDisplayer::~PVZ2UIRewardAvatarObjectDisplayer() */

void __thiscall
PVZ2UIRewardAvatarObjectDisplayer::~PVZ2UIRewardAvatarObjectDisplayer
          (PVZ2UIRewardAvatarObjectDisplayer *this)

{
  ~PVZ2UIRewardAvatarObjectDisplayer(this);
  AK::FreeHook(this);
  return;
}


/* PVZ2UIRewardAvatarObjectDisplayer::SetAvatarIndex(int) */

void __thiscall
PVZ2UIRewardAvatarObjectDisplayer::SetAvatarIndex
          (PVZ2UIRewardAvatarObjectDisplayer *this,int param_1)

{
  if (*(PVZ2UIGameObjectCard **)(this + 0xf0) != (PVZ2UIGameObjectCard *)0x0) {
    PVZ2UIGameObjectCard::SetAvatarIndex(*(PVZ2UIGameObjectCard **)(this + 0xf0),param_1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIRewardAvatarObjectDisplayer::PVZ2UIRewardAvatarObjectDisplayer(Sexy::RtWeakPtr<ObjectTypeDescriptor
   const>, std::string const&, std::string const&, bool, int, PlantAvatarType) */

void __thiscall
PVZ2UIRewardAvatarObjectDisplayer::PVZ2UIRewardAvatarObjectDisplayer
          (PVZ2UIRewardAvatarObjectDisplayer *this,RtWeakPtrBase *param_2,string *param_3,
          string *param_4,undefined1 param_5,undefined4 param_6,int param_7)

{
  PVZ2UIRewardAvatarObjectDisplayer *pPVar1;
  bool bVar2;
  char cVar3;
  RtObject *this_00;
  undefined8 uVar4;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  long lVar5;
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  PVZ2UIRewardObjectDisplayer::PVZ2UIRewardObjectDisplayer
            ((PVZ2UIRewardObjectDisplayer *)this,aRStack_10,param_5,param_6,param_7,0,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  *(undefined ***)this = &PTR_GetClass_06839490;
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)param_2);
  if (bVar2) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    bVar2 = Sexy::RtObject::IsA<PlantType>(this_00);
    if ((bVar2) && (param_7 != -1)) {
      pPVar1 = this + 0xe0;
      uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)
                         StoreItemConfig::IMAGE_UI_DIALOG_ASSET_BG_GREEN);
      *(undefined8 *)(this + 0xf8) = uVar4;
      TodStringTranslate(L"[AWARD_SCREEN_NEW_AVATAR]");
      FUN_054766c8(this + 0xe8,aRStack_10);
      FUN_05476c50(aRStack_10);
      Sexy::ToWString(param_3);
      TodStringTranslate((wstring *)aRStack_10);
      FUN_054766c8(this + 0xd8,awStack_18);
      FUN_05476c50(awStack_18);
      FUN_05476c50(aRStack_10);
      Sexy::ToWString(param_4);
      TodStringTranslate((wstring *)aRStack_10);
      FUN_054766c8(pPVar1,awStack_18);
      FUN_05476c50(awStack_18);
      FUN_05476c50(aRStack_10);
      this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
      if (this_02 != (PlayerInfo *)0x0) {
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
        cVar3 = PlayerInfo::GetIsPlantUnlocked(this_02,(string *)(lVar5 + 8));
        if (cVar3 == '\0') {
          std::string::string((string *)aRStack_10,"\n");
          Sexy::ToWString((string *)aRStack_10);
          TodStringTranslate(awStack_18);
          thunk_FUN_05477668(pPVar1,auStack_20);
          FUN_05476c50(auStack_20);
          FUN_05476c50(awStack_18);
          std::string::~string((string *)aRStack_10);
          nop();
          TodStringTranslate(L"[AWARD_SCREEN_AVATAR_PLANT_LOCKED]");
          thunk_FUN_05477668(pPVar1,aRStack_10);
          FUN_05476c50(aRStack_10);
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

