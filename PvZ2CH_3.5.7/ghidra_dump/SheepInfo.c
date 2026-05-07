// Class: SheepInfo


/* SheepInfo::SheepInfo(SheepInfo&&) */

void __thiscall SheepInfo::SheepInfo(SheepInfo *this,SheepInfo *param_1)

{
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)this,(RtWeakPtrBase *)param_1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 8),(RtWeakPtrBase *)(param_1 + 8));
  return;
}


/* SheepInfo::SheepInfo(Sexy::RtWeakPtr<Plant> const&, Sexy::RtWeakPtr<Effect_PopAnim> const&) */

void __thiscall SheepInfo::SheepInfo(SheepInfo *this,RtWeakPtr *param_1,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)this,(RtWeakPtrBase *)param_1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 8),(RtWeakPtrBase *)param_2);
  return;
}

