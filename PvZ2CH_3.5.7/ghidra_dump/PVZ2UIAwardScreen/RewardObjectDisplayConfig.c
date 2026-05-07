// Class: PVZ2UIAwardScreen::RewardObjectDisplayConfig


/* PVZ2UIAwardScreen::RewardObjectDisplayConfig::~RewardObjectDisplayConfig() */

void __thiscall
PVZ2UIAwardScreen::RewardObjectDisplayConfig::~RewardObjectDisplayConfig
          (RewardObjectDisplayConfig *this)

{
  FUN_05476c50(this + 0x18);
  FUN_05476c50(this + 0x10);
  FUN_05476c50(this + 8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this);
  return;
}


/* PVZ2UIAwardScreen::RewardObjectDisplayConfig::RewardObjectDisplayConfig() */

void __thiscall
PVZ2UIAwardScreen::RewardObjectDisplayConfig::RewardObjectDisplayConfig
          (RewardObjectDisplayConfig *this)

{
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this);
  FUN_05476574(this + 8);
  FUN_05476574(this + 0x10);
  FUN_05476574(this + 0x18);
  return;
}


/* PVZ2UIAwardScreen::RewardObjectDisplayConfig::RewardObjectDisplayConfig(PVZ2UIAwardScreen::RewardObjectDisplayConfig
   const&) */

void __thiscall
PVZ2UIAwardScreen::RewardObjectDisplayConfig::RewardObjectDisplayConfig
          (RewardObjectDisplayConfig *this,RewardObjectDisplayConfig *param_1)

{
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)this,(RtWeakPtrBase *)param_1);
  FUN_05477b24(this + 8,param_1 + 8);
  FUN_05477b24(this + 0x10,param_1 + 0x10);
  FUN_05477b24(this + 0x18,param_1 + 0x18);
  return;
}

