// Class: CustomChallengeData


/* CustomChallengeData::~CustomChallengeData() */

void __thiscall CustomChallengeData::~CustomChallengeData(CustomChallengeData *this)

{
  CustomChallengeVaseBreaker::~CustomChallengeVaseBreaker
            ((CustomChallengeVaseBreaker *)(this + 0x108));
  CustomChallengeSingleHanded::~CustomChallengeSingleHanded
            ((CustomChallengeSingleHanded *)(this + 0xd0));
  CustomChallengeTowerDefend::~CustomChallengeTowerDefend
            ((CustomChallengeTowerDefend *)(this + 0x70));
  CustomChallengeEvilDave::~CustomChallengeEvilDave((CustomChallengeEvilDave *)(this + 0x38));
  CustomChallengeStatueMaze::~CustomChallengeStatueMaze((CustomChallengeStatueMaze *)(this + 0x20));
  CustomChallengeMolds::~CustomChallengeMolds((CustomChallengeMolds *)(this + 8));
  return;
}


/* CustomChallengeData::CustomChallengeData() */

void __thiscall CustomChallengeData::CustomChallengeData(CustomChallengeData *this)

{
  WeeklyGameModesCount::WeeklyGameModesCount((WeeklyGameModesCount *)this);
  CustomChallengeMolds::CustomChallengeMolds((CustomChallengeMolds *)(this + 8));
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)(this + 0x20));
  CustomChallengeEvilDave::CustomChallengeEvilDave((CustomChallengeEvilDave *)(this + 0x38));
  CustomChallengeTowerDefend::CustomChallengeTowerDefend
            ((CustomChallengeTowerDefend *)(this + 0x70));
  CustomChallengeSingleHanded::CustomChallengeSingleHanded
            ((CustomChallengeSingleHanded *)(this + 0xd0));
  CustomChallengeVaseBreaker::CustomChallengeVaseBreaker
            ((CustomChallengeVaseBreaker *)(this + 0x108));
  return;
}


/* CustomChallengeData::CustomChallengeData(CustomChallengeData const&) */

void __thiscall
CustomChallengeData::CustomChallengeData(CustomChallengeData *this,CustomChallengeData *param_1)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  CustomChallengeMolds::CustomChallengeMolds
            ((CustomChallengeMolds *)(this + 8),(CustomChallengeMolds *)(param_1 + 8));
  CustomChallengeStatueMaze::CustomChallengeStatueMaze
            ((CustomChallengeStatueMaze *)(this + 0x20),
             (CustomChallengeStatueMaze *)(param_1 + 0x20));
  CustomChallengeEvilDave::CustomChallengeEvilDave
            ((CustomChallengeEvilDave *)(this + 0x38),(CustomChallengeEvilDave *)(param_1 + 0x38));
  CustomChallengeTowerDefend::CustomChallengeTowerDefend
            ((CustomChallengeTowerDefend *)(this + 0x70),
             (CustomChallengeTowerDefend *)(param_1 + 0x70));
  CustomChallengeSingleHanded::CustomChallengeSingleHanded
            ((CustomChallengeSingleHanded *)(this + 0xd0),
             (CustomChallengeSingleHanded *)(param_1 + 0xd0));
  CustomChallengeVaseBreaker::CustomChallengeVaseBreaker
            ((CustomChallengeVaseBreaker *)(this + 0x108),
             (CustomChallengeVaseBreaker *)(param_1 + 0x108));
  return;
}


/* CustomChallengeData::TEMPNAMEPLACEHOLDERVALUE(CustomChallengeData const&) */

CustomChallengeData * __thiscall
CustomChallengeData::operator=(CustomChallengeData *this,CustomChallengeData *param_1)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  CustomChallengeMolds::operator=
            ((CustomChallengeMolds *)(this + 8),(CustomChallengeMolds *)(param_1 + 8));
  CustomChallengeStatueMaze::operator=
            ((CustomChallengeStatueMaze *)(this + 0x20),
             (CustomChallengeStatueMaze *)(param_1 + 0x20));
  CustomChallengeEvilDave::operator=
            ((CustomChallengeEvilDave *)(this + 0x38),(CustomChallengeEvilDave *)(param_1 + 0x38));
  CustomChallengeTowerDefend::operator=
            ((CustomChallengeTowerDefend *)(this + 0x70),
             (CustomChallengeTowerDefend *)(param_1 + 0x70));
  CustomChallengeSingleHanded::operator=
            ((CustomChallengeSingleHanded *)(this + 0xd0),
             (CustomChallengeSingleHanded *)(param_1 + 0xd0));
  CustomChallengeVaseBreaker::operator=
            ((CustomChallengeVaseBreaker *)(this + 0x108),
             (CustomChallengeVaseBreaker *)(param_1 + 0x108));
  return this;
}


/* CustomChallengeData::CustomChallengeData(CustomChallengeData&&) */

void __thiscall
CustomChallengeData::CustomChallengeData(CustomChallengeData *this,CustomChallengeData *param_1)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)(this + 8),(PIInterpolator *)(param_1 + 8))
  ;
  Sexy::PIInterpolator::PIInterpolator
            ((PIInterpolator *)(this + 0x20),(PIInterpolator *)(param_1 + 0x20));
  CustomChallengeEvilDave::CustomChallengeEvilDave
            ((CustomChallengeEvilDave *)(this + 0x38),(CustomChallengeEvilDave *)(param_1 + 0x38));
  CustomChallengeTowerDefend::CustomChallengeTowerDefend
            ((CustomChallengeTowerDefend *)(this + 0x70),
             (CustomChallengeTowerDefend *)(param_1 + 0x70));
  CustomChallengeSingleHanded::CustomChallengeSingleHanded
            ((CustomChallengeSingleHanded *)(this + 0xd0),
             (CustomChallengeSingleHanded *)(param_1 + 0xd0));
  PlantWarsLeaderBoardData::PlantWarsLeaderBoardData
            ((PlantWarsLeaderBoardData *)(this + 0x108),
             (PlantWarsLeaderBoardData *)(param_1 + 0x108));
  return;
}


/* CustomChallengeData::TEMPNAMEPLACEHOLDERVALUE(CustomChallengeData&&) */

CustomChallengeData * __thiscall
CustomChallengeData::operator=(CustomChallengeData *this,CustomChallengeData *param_1)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  CustomChallengeMolds::operator=
            ((CustomChallengeMolds *)(this + 8),(CustomChallengeMolds *)(param_1 + 8));
  CustomChallengeStatueMaze::operator=
            ((CustomChallengeStatueMaze *)(this + 0x20),
             (CustomChallengeStatueMaze *)(param_1 + 0x20));
  CustomChallengeEvilDave::operator=
            ((CustomChallengeEvilDave *)(this + 0x38),(CustomChallengeEvilDave *)(param_1 + 0x38));
  CustomChallengeTowerDefend::operator=
            ((CustomChallengeTowerDefend *)(this + 0x70),
             (CustomChallengeTowerDefend *)(param_1 + 0x70));
  CustomChallengeSingleHanded::operator=
            ((CustomChallengeSingleHanded *)(this + 0xd0),
             (CustomChallengeSingleHanded *)(param_1 + 0xd0));
  CustomChallengeVaseBreaker::operator=
            ((CustomChallengeVaseBreaker *)(this + 0x108),
             (CustomChallengeVaseBreaker *)(param_1 + 0x108));
  return this;
}

