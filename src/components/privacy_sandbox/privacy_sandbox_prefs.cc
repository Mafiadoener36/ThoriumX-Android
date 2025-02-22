// Copyright 2022 The Chromium Authors and Alex313031.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "components/privacy_sandbox/privacy_sandbox_prefs.h"

#include "components/pref_registry/pref_registry_syncable.h"
#include "components/prefs/pref_registry_simple.h"
#include "components/prefs/pref_service.h"

namespace prefs {

const char kPrivacySandboxApisEnabled[] = "privacy_sandbox.apis_enabled";

const char kPrivacySandboxApisEnabledV2[] = "privacy_sandbox.apis_enabled_v2";

const char kPrivacySandboxManuallyControlled[] =
    "privacy_sandbox.manually_controlled";

const char kPrivacySandboxManuallyControlledV2[] =
    "privacy_sandbox.manually_controlled_v2";

const char kPrivacySandboxPageViewed[] = "privacy_sandbox.page_viewed";

const char kPrivacySandboxTopicsDataAccessibleSince[] =
    "privacy_sandbox.topics_data_accessible_since";

const char kPrivacySandboxBlockedTopics[] = "privacy_sandbox.blocked_topics";

extern const char kPrivacySandboxFledgeJoinBlocked[] =
    "privacy_sandbox.fledge_join_blocked";

extern const char kPrivacySandboxNoticeDisplayed[] =
    "privacy_sandbox.notice_displayed";

extern const char kPrivacySandboxConsentDecisionMade[] =
    "privacy_sandbox.consent_decision_made";

extern const char kPrivacySandboxNoConfirmationSandboxDisabled[] =
    "privacy_sandbox.no_confirmation_sandbox_disabled";

extern const char kPrivacySandboxNoConfirmationSandboxRestricted[] =
    "privacy_sandbox.no_confirmation_sandbox_restricted";

extern const char kPrivacySandboxNoConfirmationSandboxManaged[] =
    "privacy_sandbox.no_confirmation_sandbox_managed";

extern const char kPrivacySandboxNoConfirmationThirdPartyCookiesBlocked[] =
    "privacy_sandbox.no_confirmation_3PC_blocked";

extern const char kPrivacySandboxNoConfirmationManuallyControlled[] =
    "privacy_sandbox.no_confirmation_manually_controlled";

extern const char kPrivacySandboxDisabledInsufficientConfirmation[] =
    "privacy_sandbox.disabled_insufficient_confirmation";

extern const char kPrivacySandboxFirstPartySetsDataAccessAllowedInitialized[] =
    "privacy_sandbox.first_party_sets_data_access_allowed_initialized";

}  // namespace prefs

namespace privacy_sandbox {

void RegisterProfilePrefs(PrefRegistrySimple* registry) {
  registry->RegisterBooleanPref(
      prefs::kPrivacySandboxApisEnabled, true,
      user_prefs::PrefRegistrySyncable::SYNCABLE_PREF);
  registry->RegisterBooleanPref(prefs::kPrivacySandboxApisEnabledV2, true);
  registry->RegisterBooleanPref(
      prefs::kPrivacySandboxManuallyControlled, false,
      user_prefs::PrefRegistrySyncable::SYNCABLE_PREF);
  registry->RegisterBooleanPref(prefs::kPrivacySandboxManuallyControlledV2,
                                false);
  registry->RegisterBooleanPref(prefs::kPrivacySandboxPageViewed, false);
  registry->RegisterTimePref(prefs::kPrivacySandboxTopicsDataAccessibleSince,
                             base::Time());
  registry->RegisterListPref(prefs::kPrivacySandboxBlockedTopics);
  registry->RegisterDictionaryPref(prefs::kPrivacySandboxFledgeJoinBlocked);
  registry->RegisterBooleanPref(prefs::kPrivacySandboxNoticeDisplayed, false);
  registry->RegisterBooleanPref(prefs::kPrivacySandboxConsentDecisionMade,
                                false);
  registry->RegisterBooleanPref(
      prefs::kPrivacySandboxNoConfirmationSandboxDisabled, false);
  registry->RegisterBooleanPref(
      prefs::kPrivacySandboxNoConfirmationSandboxRestricted, false);
  registry->RegisterBooleanPref(
      prefs::kPrivacySandboxNoConfirmationSandboxManaged, false);
  registry->RegisterBooleanPref(
      prefs::kPrivacySandboxNoConfirmationThirdPartyCookiesBlocked, false);
  registry->RegisterBooleanPref(
      prefs::kPrivacySandboxNoConfirmationManuallyControlled, false);
  registry->RegisterBooleanPref(
      prefs::kPrivacySandboxDisabledInsufficientConfirmation, false);
  registry->RegisterBooleanPref(
      prefs::kPrivacySandboxFirstPartySetsDataAccessAllowedInitialized, false);
}

}  // namespace privacy_sandbox
