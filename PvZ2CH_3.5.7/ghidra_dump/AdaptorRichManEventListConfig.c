// Class: AdaptorRichManEventListConfig


/* AdaptorRichManEventListConfig::~AdaptorRichManEventListConfig() */

void __thiscall
AdaptorRichManEventListConfig::~AdaptorRichManEventListConfig(AdaptorRichManEventListConfig *this)

{
  std::_Destroy<InvitationPlayerInfo*>
            (*(InvitationPlayerInfo **)this,*(InvitationPlayerInfo **)(this + 8));
  std::_Vector_base<AdaptorRichManEventEntryConfig,std::allocator<AdaptorRichManEventEntryConfig>>::
  ~_Vector_base((_Vector_base<AdaptorRichManEventEntryConfig,std::allocator<AdaptorRichManEventEntryConfig>>
                 *)this);
  return;
}


/* AdaptorRichManEventListConfig::TEMPNAMEPLACEHOLDERVALUE(AdaptorRichManEventListConfig const&) */

AdaptorRichManEventListConfig * __thiscall
AdaptorRichManEventListConfig::operator=
          (AdaptorRichManEventListConfig *this,AdaptorRichManEventListConfig *param_1)

{
  std::vector<AdaptorRichManEventEntryConfig,std::allocator<AdaptorRichManEventEntryConfig>>::
  operator=((vector<AdaptorRichManEventEntryConfig,std::allocator<AdaptorRichManEventEntryConfig>> *
            )this,(vector *)param_1);
  return this;
}

