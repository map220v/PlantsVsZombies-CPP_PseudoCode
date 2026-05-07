// Class: NetworkHelper


/* NetworkHelper::getGachaActId(int) */

int NetworkHelper::getGachaActId(int param_1)

{
  if (param_1 == 0x89e) {
    param_1 = 0x8a0;
  }
  return param_1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkHelper::getObjectTypeStringByActId(int) */

void __thiscall NetworkHelper::getObjectTypeStringByActId(NetworkHelper *this,int param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  NameMapperBase *pNVar13;
  int iVar14;
  undefined1 *__n;
  string *in_x8;
  ulong uVar15;
  undefined1 auStack_10 [8];
  long local_8;
  
  uVar15 = (ulong)this & 0xffffffff;
  __n = auStack_10;
  local_8 = ___stack_chk_guard;
  std::string::string(in_x8,"");
  nop();
  pNVar13 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  iVar14 = (int)this;
  cVar1 = NameMapperBase::ContainsId(pNVar13,iVar14);
  pNVar13 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
  cVar2 = NameMapperBase::ContainsId(pNVar13,iVar14);
  pNVar13 = (NameMapperBase *)AvatarNameMapperServerID::GetInstance();
  cVar3 = NameMapperBase::ContainsId(pNVar13,iVar14);
  pNVar13 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
  cVar4 = NameMapperBase::ContainsId(pNVar13,iVar14);
  pNVar13 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
  cVar5 = NameMapperBase::ContainsId(pNVar13,iVar14);
  pNVar13 = (NameMapperBase *)PlantNewAvatarPieceMapper::GetInstance();
  cVar6 = NameMapperBase::ContainsId(pNVar13,iVar14);
  pNVar13 = (NameMapperBase *)PlantAccessoryInfoMapper::GetInstance();
  cVar7 = NameMapperBase::ContainsId(pNVar13,iVar14);
  pNVar13 = (NameMapperBase *)PlantAccessoryPieceMapper::GetInstance();
  cVar8 = NameMapperBase::ContainsId(pNVar13,iVar14);
  OtherServerNameMapper::GetInstance();
  cVar9 = FUN_031f5870(uVar15);
  OtherServerNameMapper::GetInstance();
  cVar10 = FUN_031f5860(uVar15);
  OtherServerNameMapper::GetInstance();
  cVar11 = FUN_031f5880(uVar15);
  pNVar13 = (NameMapperBase *)MaterialItemMapper::GetInstance();
  cVar12 = NameMapperBase::ContainsId(pNVar13,iVar14);
  if (cVar9 == '\0') {
    if (cVar10 == '\0') {
      if (cVar1 == '\0') {
        if (cVar2 == '\0') {
          if (cVar3 == '\0') {
            if (cVar4 == '\0') {
              if (cVar5 == '\0') {
                if (cVar6 == '\0') {
                  if (cVar7 == '\0') {
                    if (cVar8 == '\0') {
                      if (cVar11 == '\0') {
                        if (cVar12 != '\0') {
                          std::string::append(in_x8,"material",(size_t)__n);
                        }
                      }
                      else {
                        std::string::append(in_x8,"cuke",(size_t)__n);
                      }
                    }
                    else {
                      std::string::append(in_x8,"accessory_piece",(size_t)__n);
                    }
                  }
                  else {
                    std::string::append(in_x8,"accessory",(size_t)__n);
                  }
                }
                else {
                  std::string::append(in_x8,"new_avatar_piece",(size_t)__n);
                }
              }
              else {
                std::string::append(in_x8,"new_avatar",(size_t)__n);
              }
            }
            else {
              std::string::append(in_x8,"avatar_piece",(size_t)__n);
            }
          }
          else {
            std::string::append(in_x8,"avatar",(size_t)__n);
          }
        }
        else {
          std::string::append(in_x8,"plant_piece",(size_t)__n);
        }
      }
      else {
        std::string::append(in_x8,"plant",(size_t)__n);
      }
    }
    else {
      std::string::append(in_x8,"coin",(size_t)__n);
    }
  }
  else {
    std::string::append(in_x8,"gem",(size_t)__n);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkHelper::getObjectNameByActId(int) */

void __thiscall NetworkHelper::getObjectNameByActId(NetworkHelper *this,int param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  int iVar12;
  NameMapperBase *pNVar13;
  long lVar14;
  string *this_00;
  Magento *this_01;
  Magento *extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar15;
  wchar_t *pwVar16;
  Magento *extraout_x0_00;
  PlantAccessoryMgr *this_02;
  string *extraout_x1;
  ulong uVar17;
  ulong uVar18;
  wstring *pwVar19;
  string asStack_38 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  this_00 = asStack_10;
  uVar17 = (ulong)this & 0xffffffff;
  local_8 = ___stack_chk_guard;
  FUN_05478178();
  nop();
  Set8BytesTo0(asStack_38);
  pNVar13 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  iVar12 = (int)this;
  cVar1 = NameMapperBase::ContainsId(pNVar13,iVar12);
  pNVar13 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
  cVar2 = NameMapperBase::ContainsId(pNVar13,iVar12);
  pNVar13 = (NameMapperBase *)AvatarNameMapperServerID::GetInstance();
  cVar3 = NameMapperBase::ContainsId(pNVar13,iVar12);
  pNVar13 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
  cVar4 = NameMapperBase::ContainsId(pNVar13,iVar12);
  pNVar13 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
  cVar5 = NameMapperBase::ContainsId(pNVar13,iVar12);
  pNVar13 = (NameMapperBase *)PlantNewAvatarPieceMapper::GetInstance();
  cVar6 = NameMapperBase::ContainsId(pNVar13,iVar12);
  pNVar13 = (NameMapperBase *)PlantAccessoryInfoMapper::GetInstance();
  cVar7 = NameMapperBase::ContainsId(pNVar13,iVar12);
  pNVar13 = (NameMapperBase *)PlantAccessoryPieceMapper::GetInstance();
  cVar8 = NameMapperBase::ContainsId(pNVar13,iVar12);
  OtherServerNameMapper::GetInstance();
  cVar9 = FUN_031f5870(uVar17);
  OtherServerNameMapper::GetInstance();
  cVar10 = FUN_031f5860(uVar17);
  OtherServerNameMapper::GetInstance();
  cVar11 = FUN_031f5880(uVar17);
  if (cVar9 == '\0') {
    if (cVar10 != '\0') {
      pwVar16 = L"[COIN_STORE]";
      goto LAB_031f63d4;
    }
    if (cVar1 == '\0') {
      if (cVar2 != '\0') {
        iVar12 = PlantChipNameMapperServerID::GetInstance();
        goto LAB_031f6454;
      }
      if (cVar3 != '\0') {
        iVar12 = AvatarNameMapperServerID::GetInstance();
LAB_031f65ac:
        NameMapperBase::GetNameForId(iVar12);
        FUN_05474278(asStack_38,this_00);
        std::string::~string(this_00);
        this_01 = extraout_x0_00;
        goto LAB_031f63f4;
      }
      if (cVar4 != '\0') {
        iVar12 = AvatarChipNameMapperServerID::GetInstance();
        goto LAB_031f65ac;
      }
      if (cVar7 == '\0') {
        if (cVar8 == '\0') {
          if (cVar11 == '\0') {
            if (cVar5 == '\0') {
              if (cVar6 == '\0') goto LAB_031f6408;
              pRVar15 = aRStack_30;
              pwVar19 = awStack_28;
              NewAvatar::GetAvatarInfoByAvatarPieceId(iVar12);
              lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar15);
              Sexy::ToWString((string *)(lVar14 + 0x48));
              TodStringTranslate(pwVar19);
              TodStringTranslate(L"[PIECE]");
              std::operator+(awStack_20,awStack_18);
              FUN_054766c8();
              FUN_05476c50(this_00);
              FUN_05476c50(awStack_18);
              this_00 = (string *)awStack_20;
            }
            else {
              pRVar15 = (RtWeakPtr<Sexy::ResourceInfo> *)awStack_20;
              pwVar19 = awStack_18;
              NewAvatar::GetAvatarInfoByAvatarId(iVar12);
              lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar15);
              Sexy::ToWString((string *)(lVar14 + 0x48));
              TodStringTranslate(pwVar19);
              FUN_054766c8();
            }
            FUN_05476c50(this_00);
            FUN_05476c50(pwVar19);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(pRVar15);
          }
          else {
            TodStringTranslate(L"[TACTICAL_CUKE]");
            FUN_054766c8();
            FUN_05476c50(this_00);
          }
          goto LAB_031f6408;
        }
        this_02 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
        iVar12 = PlantAccessoryPieceMapper::GetInstance();
      }
      else {
        this_02 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
        iVar12 = PlantAccessoryInfoMapper::GetInstance();
      }
      NameMapperBase::GetNameForId(iVar12);
      PlantAccessoryMgr::GetAccessoryDisplayName(this_02,(string *)awStack_18);
      thunk_FUN_05477b9c();
      FUN_05476c50(this_00);
      std::string::~string((string *)awStack_18);
      goto LAB_031f63fc;
    }
    iVar12 = PlantNameMapperServerID::GetInstance();
LAB_031f6454:
    NameMapperBase::GetNameForId(iVar12);
    FUN_05474278(asStack_38,this_00);
    std::string::~string(this_00);
    this_01 = extraout_x0;
LAB_031f6474:
    Magento::GetPlantLevelUp(this_01);
    uVar17 = 0;
    do {
      uVar18 = uVar17;
      lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)awStack_28)
      ;
      uVar17 = FUN_031f58d4(*(undefined8 *)(lVar14 + 0x60),*(undefined8 *)(lVar14 + 0x68));
      if (uVar17 <= uVar18) goto LAB_031f64dc;
      lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)awStack_28)
      ;
      pRVar15 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_031f58e0(*(undefined8 *)(lVar14 + 0x60),uVar18)
      ;
      lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar15);
      cVar1 = std::operator==((string *)(lVar14 + 0x80),asStack_38);
      uVar17 = uVar18 + 1;
    } while (cVar1 == '\0');
    lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)awStack_28);
    pRVar15 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_031f58e0(*(undefined8 *)(lVar14 + 0x60),uVar18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar15);
    MagentoProductProps::GetLocalizedShortDescription();
    Sexy::UTF8StringToWString((Sexy *)awStack_20,extraout_x1);
    TodStringTranslate(awStack_18);
    FUN_054766c8();
    FUN_05476c50(this_00);
    FUN_05476c50(awStack_18);
    std::string::~string((string *)awStack_20);
LAB_031f64dc:
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)awStack_28);
    if (cVar2 != '\0') goto LAB_031f64fc;
    if (cVar4 == '\0') goto LAB_031f63fc;
    pwVar16 = L"[AVATAR_PIECE]";
  }
  else {
    pwVar16 = L"[GEM_STORE]";
LAB_031f63d4:
    TodStringTranslate(pwVar16);
    FUN_054766c8();
    this_01 = (Magento *)FUN_05476c50(this_00);
    if ((cVar2 != '\0') || (cVar1 != '\0')) goto LAB_031f6474;
LAB_031f63f4:
    if ((cVar4 != '\0') || (cVar3 != '\0')) goto LAB_031f6474;
LAB_031f63fc:
    if (cVar8 == '\0') {
      if (cVar3 == '\0') goto LAB_031f6408;
      pwVar16 = L"[PLANT_SPECIAL_OFFER_AVATAR_NAME]";
    }
    else {
LAB_031f64fc:
      pwVar16 = L"[PIECE]";
    }
  }
  TodStringTranslate(pwVar16);
  thunk_FUN_05477668();
  FUN_05476c50(this_00);
LAB_031f6408:
  std::string::~string(asStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkHelper::checkNameMapperValid() */

void NetworkHelper::checkNameMapperValid(void)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  map *pmVar4;
  string *psVar5;
  long lVar6;
  long lVar7;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_98 [48];
  map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  amStack_68 [48];
  string asStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_98);
  std::string::string(asStack_38,"sunflower");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 1;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"peashooter");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 2;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"wallnut");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 3;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"tallnut");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 4;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"bonkchoy");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 5;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"cabbagepult");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 6;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"melonpult");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 7;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"cherry_bomb");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 8;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"coconutcannon");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 9;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"gravebuster");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 10;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"iceburg");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0xb;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"laser_bean");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0xc;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"potatomine");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0xd;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"repeater");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0xe;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"snapdragon");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0xf;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"spikeweed");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x10;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"threepeater");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x11;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"torchwood");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x12;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"kernelpult");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x13;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"springbean");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x14;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"snowpea");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x15;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"chilibean");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x16;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"splitpea");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x17;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"lightningreed");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x18;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"peapod");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x19;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"magnifyinggrass");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x1a;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"bloomerang");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x1b;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"holonut");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x1c;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"empea");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x1d;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"blover");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x1e;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"starfruit");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x1f;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"imitater");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x20;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"jalapeno");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x21;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"wintermelon");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x22;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"twinsunflower");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x23;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"spikerock");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x25;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"powerlily");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x26;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"squash");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x27;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"citron");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x28;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"powerplant");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x29;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"turnip");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x2a;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"peach");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x2b;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"firegourd");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x2c;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"bamboo");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x2d;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"smallcherry");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x2e;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"carrotlauncher");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x2f;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"carrotmissile");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x30;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"dandelion");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x31;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"broccoli");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x32;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"puffshroom");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x33;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"fumeshroom");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x34;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"hypnoshroom");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x35;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"sunshroom");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x36;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"sunbean");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x37;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"peanut");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x38;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"magnetshroom");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x39;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"streetlamp");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x3a;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"coffeebean");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x3b;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"iceshroom");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x3c;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"fireshroom");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x3d;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"oakshooter");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x3e;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"pamegranate");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x3f;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"chomper");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x40;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"sweetpotato");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x41;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"tanglekelp");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x42;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"banana");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x43;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"guacodile");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x44;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"homingthistle");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x45;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"lilypad");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x46;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"lemon");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x47;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"ghostpepper");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x48;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"bowlingbulb");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x49;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"cracker");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x4a;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"lotusshower");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x4b;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"sapfling");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x4c;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"hurrikale");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x4d;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"firepeashooter");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x4e;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"hotpotato");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x4f;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"pepperpult");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x50;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"chardguard");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x51;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"stunion");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x52;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"rafflesia");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x53;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"acorn");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x54;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"doublesamara");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x55;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"anthurium");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x56;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"asparagus");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x57;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"saucer");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x58;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"horsebean");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x59;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"groundcherry");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x5a;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"pineapple");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x5b;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"goldleaf");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x5d;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"akee");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x5f;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"redstinger");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x60;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"stallia");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x61;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"lavaguava");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x62;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"toadstool");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 99;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"jackfruit");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 100;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"phatbeet");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x65;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"thymewarp");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x66;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"celerystalker");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x67;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"sporeshroom");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x68;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"garlic");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x69;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"intensivecarrot");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x6a;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"morningglory");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x6b;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"cactus");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x6c;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"primalpeashooter");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x6d;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"primalwallnut");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x6e;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"perfumeshroom");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x6f;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"primalsunflower");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x70;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"primalpotatomine");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x71;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"dragonroar");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x72;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"bramble");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x73;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"caulipower");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x74;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"shadowshroom");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x75;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"moonflower");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x76;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"explodeonut");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x77;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"nightshade");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x78;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"dusklobber");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x79;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"bloominghearts");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x7a;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"smallexplodeonut");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x7b;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"grimrose");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x7c;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"goldbloom");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x7d;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"flattenedshroom");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x7e;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"lotusshooter");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x7f;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"convallariachemist");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x80;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"passionflower");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x81;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"vanilla");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x82;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"mulberry");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x83;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"chestnut");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 300;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"smallChestnut");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x12d;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"xshot");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x12e;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"sugarcane");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x12f;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"bashopult");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x130;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"magicshroom");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x131;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"roseswordman");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x132;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"electricblueberry");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x133;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"birthsunflower");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x134;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"greenturnip");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x135;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"endurian");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x136;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"pumpkinwitch");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x137;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"cottonyeti");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x138;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"agave");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x139;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"kiwifruit");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x13a;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"wintersweet");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x13b;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"dragonfruit");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x13c;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"pinkstarfruit");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x13d;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"matchflower");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x13e;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"flamelady");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x13f;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"gatlingpea");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x140;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"nekotail");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x141;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"grapeshot");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x142;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"coldsnapdragon");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x143;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"shrinkingviolet");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x144;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"primalrafflesia");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x145;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"dragoncane");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x146;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"cobcannon");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x147;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"applemortar");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x148;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"witchhazel");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x149;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"escaperoot");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x14a;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"electriccurrant");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x14b;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"whitemelon");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x14c;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"wasabiwhip");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x14d;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"parsnip");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x14e;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"missiletoe");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x14f;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"kiwibeast");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x150;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"hotdate");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x151;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"electricpeashooter");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x152;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"icycurrant");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x153;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"tuliptrumpeter");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x154;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"eggplantninja");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x155;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"plantain");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x156;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"pinecone");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x159;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"narcissusshooter");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x158;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"smallcactus");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x15a;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"alarmsagittifolia");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x15b;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"hollyknight");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x15c;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"hollybarrierleaf");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x15d;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"shadowpeashooter");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x15e;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"snappea");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x15f;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"monotropa");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x160;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"slingpea");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x161;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"thundersnapdragon");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x162;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"aloes");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x163;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"bearberry");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x164;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"waxgourd");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x165;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"electricitea");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x166;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"imppear");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x167;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"pomegranatejeweler");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x168;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"olive");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x169;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"egretflower");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x16a;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"strawburst");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x16b;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"poisonpeashooter");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x16c;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"elaeocarpus");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x16d;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"dartichoke");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x16e;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"eleocurling");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x16f;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"pokra");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x170;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"hydrocotyledrummer");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x171;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"ultomato");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x172;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"tupistrastalker");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x173;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"shadowvanilla");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x174;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"bromelblade");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x175;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"stephania");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x176;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"icelotus");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x177;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"dendrobiumguard");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x178;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"cypripedium");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x179;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"gumnut");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x17a;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"olivepit");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x17b;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"boophonegeisha");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x17c;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"stickybombrice");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x17d;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"nukelauncher");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x17e;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"headbutterlettuce");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x17f;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"dazeychain");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x180;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"boomflower");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x181;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"beercoconut");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x182;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"clawgloriosa");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x183;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"flowerpot");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x184;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"impatiensshooter");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x185;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"turkeypult");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x186;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"hammerflower");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x187;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"mangosteen");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x188;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"fishhookgrass");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x189;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"bitpeashooter");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x18a;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"tigerstool");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x18c;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"inferno");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x18b;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"draftodil");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x18d;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"magicbeans");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x18e;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"gardenergrass");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 399;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"frog");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 400;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"heathseeker");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x191;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"ents");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x192;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"hatmushroom");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x193;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"hocuscrocus");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x194;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"springprincess");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x195;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"riflebamboo");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x196;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"byttneriameteorhammer");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x197;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"buttercup");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x198;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"crownflower");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x199;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"zoybeanpod");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x19a;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"orchidmage");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x19b;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"jackolantern");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x19c;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"beanchemist");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x19d;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"jewelrabbit");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x19e;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"lancerhoya");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x19f;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"burdockbatter");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x1a0;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"vamporcini");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x1a1;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"pumpkin");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x1a2;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"geraniifencer");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x1a3;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"deodarcedar");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x1a4;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"powervine");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x1a5;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"sarracenia");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x1a6;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"meteorflower");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x1a7;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"mandrake");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x1a8;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"cthulhuactinia");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x1a9;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"devilsflower");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x1aa;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"hoyacordata");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x1ab;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"peavine");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x1ac;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"maybee");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x1ad;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"rapeflower");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x1ae;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"dracaena");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x1af;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"spartanbamboo");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x1b0;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"shinevine");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x1b1;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"happyleek");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x1b2;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"nightcap");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x1b3;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"pyrevine");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x1b4;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"gluttonydragon");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x1b5;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"waterrabbit");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x1b6;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"armorflame");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x1b7;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"heliconiagunner");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x1b8;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"electricpeel");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x1b9;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"wizardthorns");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x1ba;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"chainsawburmannii");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x1bb;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"tristerixaphyllus");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x1bc;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"minigame_imitater");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x1bd;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"dragonbruit");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x1be;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"dragonbabybruit");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x1bf;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"gloomvine");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x1c0;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"eagleclaw");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x1c1;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"heavendatura");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x1c2;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"firecrackerflower");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x1c3;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"twinshoneysuckle");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x1c4;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"rhubarbarian");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x1c5;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"aquavine");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x1c6;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"winterrambutan");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x1c7;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"wiregelsemium");
  puVar3 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)amStack_98,asStack_38);
  *puVar3 = 0x1c8;
  std::string::~string(asStack_38);
  nop();
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::map(amStack_68,(map *)amStack_98);
  this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          *)PlantNameMapper::GetInstance();
  pmVar4 = (map *)std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_end(this);
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
         *)asStack_38,pmVar4);
  local_b0 = std::
             map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
             ::begin((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                      *)asStack_38);
  do {
    psVar5 = (string *)
             std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                       ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_b0);
    local_a8 = std::
               map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
               ::find(amStack_68,psVar5);
    local_a0 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)amStack_68);
    cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_a8,(exception_ptr *)&local_a0);
    if (cVar1 == '\0') {
      lVar6 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_a8);
      lVar7 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_b0);
      if (*(int *)(lVar6 + 8) != *(int *)(lVar7 + 8)) {
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
    }
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_b0);
    local_a0 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)asStack_38);
    bVar2 = eastl::operator!=((rbtree_iterator *)&local_b0,(rbtree_iterator *)&local_a0);
  } while (bVar2);
  Sexy::OutputDebugStrF((wchar_t *)"NameMapper check successful!!!\n");
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::~map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
          *)asStack_38);
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::~map(amStack_68);
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::~map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
          *)amStack_98);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkHelper::pushDrawResult(std::vector<S2C_BonusInfo, std::allocator<S2C_BonusInfo> > const&)
    */

void NetworkHelper::pushDrawResult(vector *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  PlayerInfo *this;
  long lVar7;
  int *piVar8;
  NameMapperBase *pNVar9;
  ulong uVar10;
  char *__s;
  ulong in_x2;
  size_t __n;
  undefined8 uVar11;
  ulong uVar12;
  string *this_00;
  string asStack_48 [8];
  string asStack_40 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  pair<std::string,std::string> apStack_20 [8];
  string asStack_18 [8];
  uint local_10;
  undefined1 local_c;
  byte local_b;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  this = (PlayerInfo *)ProfileUtils::Profile();
  if (this != (PlayerInfo *)0x0) {
    uVar11 = *(undefined8 *)param_1;
    uVar12 = 0;
    lVar7 = FUN_031f58b4(uVar11,*(undefined8 *)(param_1 + 8));
    if (lVar7 != 0) {
      do {
        piVar8 = (int *)FUN_031f58c8(uVar11,uVar12);
        iVar1 = *piVar8;
        pNVar9 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
        cVar2 = NameMapperBase::ContainsId(pNVar9,iVar1);
        if (cVar2 == '\0') {
LAB_031fc0c4:
          pNVar9 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
          cVar2 = NameMapperBase::ContainsId(pNVar9,iVar1);
          if (cVar2 != '\0') {
            iVar5 = PlantChipNameMapperServerID::GetInstance();
            this_00 = asStack_48;
            NameMapperBase::GetNameForId(iVar5);
            bVar3 = std::operator!=(this_00,"");
            if (!bVar3) {
              std::string::~string(this_00);
              goto LAB_031fc174;
            }
            std::pair<std::string,std::string>::pair(apStack_20);
            local_c = 0;
            FUN_031f5e7c(asStack_40,"plant_piece_",this_00);
            FUN_05474278(apStack_20,asStack_40);
            std::string::~string(asStack_40);
            lVar7 = FUN_031f58c8(*(undefined8 *)param_1,uVar12);
            local_10 = *(uint *)(lVar7 + 4);
            in_x2 = (ulong)local_10;
            __s = "plant_piece";
LAB_031fc158:
            std::string::append(asStack_18,__s,in_x2);
            local_b = 0;
            goto LAB_031fc024;
          }
LAB_031fc174:
          pNVar9 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
          cVar2 = NameMapperBase::ContainsId(pNVar9,iVar1);
          if (cVar2 != '\0') {
            iVar5 = AvatarChipNameMapperServerID::GetInstance();
            this_00 = asStack_48;
            NameMapperBase::GetNameForId(iVar5);
            bVar3 = std::operator!=(this_00,"");
            if (bVar3) {
              std::pair<std::string,std::string>::pair(apStack_20);
              local_c = 0;
              lVar7 = FUN_031f58c8(*(undefined8 *)param_1,uVar12);
              local_10 = *(uint *)(lVar7 + 4);
              in_x2 = (ulong)local_10;
              FUN_031f5e7c(asStack_40,"avatar_piece_",this_00);
              FUN_05474278(apStack_20,asStack_40);
              std::string::~string(asStack_40);
              __s = "avatar_piece";
              goto LAB_031fc158;
            }
            std::string::~string(this_00);
          }
          pNVar9 = (NameMapperBase *)AvatarNameMapperServerID::GetInstance();
          cVar2 = NameMapperBase::ContainsId(pNVar9,iVar1);
          if (cVar2 != '\0') {
            iVar5 = AvatarNameMapperServerID::GetInstance();
            this_00 = asStack_48;
            NameMapperBase::GetNameForId(iVar5);
            bVar3 = std::operator!=(this_00,"");
            if (bVar3) {
              std::pair<std::string,std::string>::pair(apStack_20);
              local_c = 0;
              lVar7 = FUN_031f58c8(*(undefined8 *)param_1,uVar12);
              local_10 = *(uint *)(lVar7 + 4);
              __n = (size_t)local_10;
              FUN_031f5e7c(asStack_40,"avatar_",this_00);
              FUN_05474278(apStack_20,asStack_40);
              std::string::~string(asStack_40);
              std::string::append(asStack_18,"avatar",__n);
              uVar6 = PlayerInfo::IsPlantAvatarUnLocked(this,this_00,0,0);
              in_x2 = (ulong)(uVar6 ^ 1);
              local_b = (byte)(uVar6 ^ 1);
              goto LAB_031fc024;
            }
            std::string::~string(this_00);
          }
          pNVar9 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
          cVar2 = NameMapperBase::ContainsId(pNVar9,iVar1);
          if (cVar2 != '\0') {
            iVar5 = PlantNewAvatarMapper::GetInstance();
            this_00 = asStack_48;
            NameMapperBase::GetNameForId(iVar5);
            bVar3 = std::operator!=(this_00,"");
            if (bVar3) {
              std::pair<std::string,std::string>::pair(apStack_20);
              local_c = 0;
              lVar7 = FUN_031f58c8(*(undefined8 *)param_1,uVar12);
              local_10 = *(uint *)(lVar7 + 4);
              FUN_031f5e7c(asStack_40,"new_avatar_",this_00);
              FUN_05474278(apStack_20,asStack_40);
              std::string::~string(asStack_40);
              std::string::append(asStack_18,"new_avatar",in_x2);
              uVar6 = PlayerInfo::IsPlantNewAvatarUnLocked(this,iVar1);
              in_x2 = (ulong)(uVar6 ^ 1);
              local_b = (byte)(uVar6 ^ 1);
              goto LAB_031fc024;
            }
            std::string::~string(this_00);
          }
          pNVar9 = (NameMapperBase *)PlantNewAvatarPieceMapper::GetInstance();
          cVar2 = NameMapperBase::ContainsId(pNVar9,iVar1);
          if (cVar2 != '\0') {
            iVar5 = PlantNewAvatarPieceMapper::GetInstance();
            this_00 = asStack_48;
            NameMapperBase::GetNameForId(iVar5);
            bVar3 = std::operator!=(this_00,"");
            if (bVar3) {
              std::pair<std::string,std::string>::pair(apStack_20);
              local_c = 0;
              lVar7 = FUN_031f58c8(*(undefined8 *)param_1,uVar12);
              local_10 = *(uint *)(lVar7 + 4);
              in_x2 = (ulong)local_10;
              FUN_031f5e7c(asStack_40,"new_avatar_piece_",this_00);
              FUN_05474278(apStack_20,asStack_40);
              std::string::~string(asStack_40);
              __s = "new_avatar_piece";
              goto LAB_031fc158;
            }
            std::string::~string(this_00);
          }
          pNVar9 = (NameMapperBase *)PlantAccessoryPieceMapper::GetInstance();
          cVar2 = NameMapperBase::ContainsId(pNVar9,iVar1);
          if (cVar2 != '\0') {
            iVar5 = PlantAccessoryPieceMapper::GetInstance();
            this_00 = asStack_40;
            NameMapperBase::GetNameForId(iVar5);
            std::operator+((string *)apStack_20,"_piece");
            std::string::~string((string *)apStack_20);
            bVar3 = std::operator!=(this_00,"");
            if (bVar3) {
              std::pair<std::string,std::string>::pair(apStack_20);
              local_c = 0;
              lVar7 = FUN_031f58c8(*(undefined8 *)param_1,uVar12);
              local_10 = *(uint *)(lVar7 + 4);
              in_x2 = (ulong)local_10;
              thunk_FUN_05475e00(apStack_20,this_00);
              __s = "accessory_piece";
              goto LAB_031fc158;
            }
            std::string::~string(this_00);
          }
          if (iVar1 == 0xbc0) {
            std::pair<std::string,std::string>::pair(apStack_20);
            local_c = 0;
            lVar7 = FUN_031f58c8(*(undefined8 *)param_1,uVar12);
            local_10 = *(uint *)(lVar7 + 4);
            in_x2 = (ulong)local_10;
            std::string::append((string *)apStack_20,"gem",in_x2);
            std::string::append(asStack_18,"gem",in_x2);
            local_b = 0;
            std::vector<RewardItemData,std::allocator<RewardItemData>>::push_back
                      ((vector<RewardItemData,std::allocator<RewardItemData>> *)avStack_38,
                       (RewardItemData *)apStack_20);
            Sexy::PACommand::~PACommand((PACommand *)apStack_20);
          }
        }
        else {
          iVar5 = PlantNameMapperServerID::GetInstance();
          this_00 = asStack_40;
          NameMapperBase::GetNameForId(iVar5);
          bVar3 = std::operator!=(this_00,"");
          if (!bVar3) {
            std::string::~string(this_00);
            goto LAB_031fc0c4;
          }
          bVar4 = PlayerInfo::GetIsPlantUnlocked(this,this_00);
          std::pair<std::string,std::string>::pair(apStack_20);
          local_c = 1;
          thunk_FUN_05475e00(apStack_20,this_00);
          lVar7 = FUN_031f58c8(*(undefined8 *)param_1,uVar12);
          local_10 = *(uint *)(lVar7 + 4);
          in_x2 = (ulong)local_10;
          std::string::append(asStack_18,"plant",in_x2);
          local_b = bVar4 ^ 1;
LAB_031fc024:
          std::vector<RewardItemData,std::allocator<RewardItemData>>::push_back
                    ((vector<RewardItemData,std::allocator<RewardItemData>> *)avStack_38,
                     (RewardItemData *)apStack_20);
          Sexy::PACommand::~PACommand((PACommand *)apStack_20);
          std::string::~string(this_00);
        }
        uVar12 = uVar12 + 1;
        uVar11 = *(undefined8 *)param_1;
        uVar10 = FUN_031f58b4(uVar11,*(undefined8 *)(param_1 + 8));
      } while (uVar12 < uVar10);
    }
    std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
              ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)apStack_20,param_1);
    PlayerInfo::AddCommonGachaRewardList(this,apStack_20,0);
    std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
              ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)apStack_20);
  }
  GachaUI::setRewardItemList((vector *)avStack_38);
  std::vector<RewardItemData,std::allocator<RewardItemData>>::~vector
            ((vector<RewardItemData,std::allocator<RewardItemData>> *)avStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkHelper::shallUpdateChargeReward(int) */

void NetworkHelper::shallUpdateChargeReward(int param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  ProfileMgr *this;
  PlayerInfo *this_00;
  undefined4 *puVar4;
  ulong uVar5;
  int *piVar6;
  bool bVar7;
  ulong uVar8;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  local_24 = 2;
  std::vector<RechargeNode,std::allocator<RechargeNode>>::push_back
            ((vector<RechargeNode,std::allocator<RechargeNode>> *)&local_20,
             (RechargeNode *)&local_24);
  local_24 = 10;
  std::vector<RechargeNode,std::allocator<RechargeNode>>::push_back
            ((vector<RechargeNode,std::allocator<RechargeNode>> *)&local_20,
             (RechargeNode *)&local_24);
  local_24 = 0x14;
  std::vector<RechargeNode,std::allocator<RechargeNode>>::push_back
            ((vector<RechargeNode,std::allocator<RechargeNode>> *)&local_20,
             (RechargeNode *)&local_24);
  local_24 = 0x1e;
  std::vector<RechargeNode,std::allocator<RechargeNode>>::push_back
            ((vector<RechargeNode,std::allocator<RechargeNode>> *)&local_20,
             (RechargeNode *)&local_24);
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  uVar5 = 0;
  do {
    uVar8 = uVar5;
    uVar1 = local_20;
    uVar5 = FUN_031f5898(local_20,local_18);
    if (uVar5 <= uVar8) {
      bVar7 = false;
      goto LAB_031fc818;
    }
    puVar4 = (undefined4 *)FUN_031f58a4(uVar1,uVar8);
    cVar2 = PlayerInfo::IsUnlockRechargeNode(this_00,*puVar4);
    uVar5 = uVar8 + 1;
  } while (cVar2 != '\0');
  iVar3 = PlayerInfo::GetNumTotalRechargeCurrency(this_00);
  piVar6 = (int *)FUN_031f58a4(local_20,uVar8);
  bVar7 = *piVar6 <= iVar3;
LAB_031fc818:
  std::vector<RechargeNode,std::allocator<RechargeNode>>::~vector
            ((vector<RechargeNode,std::allocator<RechargeNode>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar7);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkHelper::getFirstChargeRewardIndex() */

void NetworkHelper::getFirstChargeRewardIndex(void)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  ulong uVar5;
  ulong uVar6;
  RechargeRewardItem aRStack_b0 [8];
  undefined8 local_a8;
  undefined8 local_a0;
  ActiveItem aAStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  RechargeRewardItem::RechargeRewardItem(aRStack_b0);
  cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aRStack_b0);
  if (cVar1 == '\0') {
LAB_031fc9d4:
    uVar6 = 0xffffffff;
  }
  else {
    uVar3 = FUN_031f588c(local_a8,local_a0);
    uVar5 = 0;
    do {
      uVar6 = uVar5 & 0xffffffff;
      if (uVar5 == uVar3) goto LAB_031fc9d4;
      piVar4 = (int *)FUN_031f58ac(local_a8,uVar5);
      uVar5 = uVar5 + 1;
    } while (*piVar4 != 1);
  }
  RechargeRewardItem::~RechargeRewardItem(aRStack_b0);
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkHelper::MakeServerPlantBanList(ActivityTypeID, std::vector<int, std::allocator<int> >&) */

void NetworkHelper::MakeServerPlantBanList
               (undefined8 param_1,vector<int,std::allocator<int>> *param_2)

{
  char cVar1;
  int iVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  Value *this_00;
  Value *pVVar3;
  int local_104;
  StructuredData aSStack_100 [120];
  ActiveItem aAStack_88 [64];
  string asStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  Sexy::StructuredData::StructuredData(aSStack_100);
  cVar1 = StringHelper::ReadJson(asStack_48,aSStack_100);
  if (cVar1 != '\0') {
    this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Sexy::StructuredData::ArrayForPath(aSStack_100,"$.ppc");
    std::vector<int,std::allocator<int>>::clear(param_2);
    if (this != (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)0x0) {
      for (this_00 = (Value *)std::
                              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              ::_M_rightmost(this);
          pVVar3 = (Value *)Sexy::StructuredData::Value::ChildrenEnd((Value *)this),
          this_00 != pVVar3; this_00 = (Value *)Sexy::StructuredData::Value::Next(this_00)) {
        local_104 = FUN_031f585c(*(undefined8 *)(this_00 + 0x10));
        std::vector<int,std::allocator<int>>::push_back(param_2,&local_104);
      }
    }
  }
  Sexy::StructuredData::~StructuredData(aSStack_100);
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

