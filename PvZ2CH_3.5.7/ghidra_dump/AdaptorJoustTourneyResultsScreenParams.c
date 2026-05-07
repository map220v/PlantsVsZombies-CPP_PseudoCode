// Class: AdaptorJoustTourneyResultsScreenParams


/* AdaptorJoustTourneyResultsScreenParams::AdaptorJoustTourneyResultsScreenParams() */

void __thiscall
AdaptorJoustTourneyResultsScreenParams::AdaptorJoustTourneyResultsScreenParams
          (AdaptorJoustTourneyResultsScreenParams *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 1;
  *(undefined4 *)(this + 8) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* AdaptorJoustTourneyResultsScreenParams::~AdaptorJoustTourneyResultsScreenParams() */

void __thiscall
AdaptorJoustTourneyResultsScreenParams::~AdaptorJoustTourneyResultsScreenParams
          (AdaptorJoustTourneyResultsScreenParams *this)

{
  std::vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>>::~vector
            ((vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>> *)
             (this + 0x10));
  return;
}


/* AdaptorJoustTourneyResultsScreenParams::TEMPNAMEPLACEHOLDERVALUE(AdaptorJoustTourneyResultsScreenParams
   const&) */

AdaptorJoustTourneyResultsScreenParams * __thiscall
AdaptorJoustTourneyResultsScreenParams::operator=
          (AdaptorJoustTourneyResultsScreenParams *this,
          AdaptorJoustTourneyResultsScreenParams *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  std::vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>>::operator=
            ((vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>> *)
             (this + 0x10),(vector *)(param_1 + 0x10));
  return this;
}

