/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IntlPreferences.framework/IntlPreferences
 */

@interface IntlUtility : NSObject {
    NSMutableArray * mBidiLanguagesArray;
    NSMutableArray * mBidiTestedLanguagesArray;
    void * mDisplayLanguageCachePtr;
    int  mDisplayLanguageCacheUsed;
}

+ (int)UDisplayContextForIUDisplayNameContext:(unsigned long long)arg1;
+ (id)alternateContinentOfRegion:(id)arg1;
+ (id)baseLanguageIdentifierFromIdentifier:(id)arg1;
+ (id)baseSystemLanguages;
+ (id)capitalizeFirstWordOfName:(id)arg1 accordingToLanguage:(id)arg2;
+ (id)defaultCalendarForLocaleID:(id)arg1;
+ (id)defaultNumberingSystemForLocaleID:(id)arg1;
+ (id)displayNameForNumberingSystemWithIdentifier:(id)arg1 localeIdentifier:(id)arg2;
+ (id)displayNameForNumberingSystemWithIdentifier:(id)arg1 localeIdentifier:(id)arg2 short:(bool)arg3;
+ (void)enumeratePreferredCalendarsForLocaleID:(id)arg1 usingBlock:(id /* block */)arg2;
+ (id)filterLanguageList:(id)arg1 forRegion:(id)arg2 fromLanguages:(id)arg3;
+ (bool)isLunarCalendarDefaultOn;
+ (bool)isLunarCalendarDefaultOnForLanguage:(id)arg1 locale:(id)arg2;
+ (bool)isYearlessDate:(id)arg1 forCalendar:(id)arg2;
+ (id)languageCharSetList;
+ (id)languageIdentifierFromIdentifier:(id)arg1 withRegion:(id)arg2;
+ (id)languageNameOverrides;
+ (id)localeForCalendarID:(id)arg1;
+ (id)localeForCalendarID:(id)arg1 andLocale:(id)arg2;
+ (id)lunarCalendarsForLocaleID:(id)arg1;
+ (id)normalizedLanguageIDFromString:(id)arg1;
+ (id)numberingSystemForLocaleID:(id)arg1;
+ (id)numberingSystemsForLocaleID:(id)arg1;
+ (id)numberingSystemsFromArray:(id)arg1 forLocaleID:(id)arg2;
+ (id)parentLocaleIdentifierForIdentifier:(id)arg1;
+ (id)preferredLanguagesForRegion:(id)arg1;
+ (id)preferredLanguagesForRegionWithoutFiltering:(id)arg1;
+ (id)preferredLanguagesFromLanguages:(id)arg1 byAddingFallbacksForRegion:(id)arg2;
+ (id)preferredLunarCalendarForLocaleID:(id)arg1;
+ (id)restrictedCountryCodes;
+ (void)setYearlessYear:(id)arg1 forCalendar:(id)arg2;
+ (id)sharedIntlUtility;
+ (id)shortDisplayNameForNumberingSystemWithIdentifier:(id)arg1 localeIdentifier:(id)arg2;
+ (id)stdLanguageIDs;
+ (id)supportedCalendars;
+ (bool)upgradeAppleLanguagesFrom:(id)arg1 to:(id)arg2;
+ (long long)yearlessYearForMonth:(long long)arg1 withCalendar:(id)arg2;

- (id)ICUdisplayNameForLanguage:(id)arg1 capitalization:(struct ULocaleDisplayNames { }*)arg2;
- (bool)canRenderLanguage:(id)arg1;
- (void)dealloc;
- (id)displayNameForDialect:(id)arg1 context:(unsigned long long)arg2 displayLanguage:(id)arg3;
- (id)displayNameForLabelForLunarCalendarID:(id)arg1 displayLanguage:(id)arg2;
- (id)displayNameForLanguage:(id)arg1 context:(unsigned long long)arg2 displayLanguage:(id)arg3;
- (id)displayNameForLocale:(id)arg1 displayLanguage:(id)arg2 capitalization:(unsigned long long)arg3 short:(bool)arg4;
- (id)displayNameForNormalizedLanguage:(id)arg1 context:(unsigned long long)arg2 displayLanguage:(id)arg3;
- (id)displayNameForRegion:(id)arg1 displayLanguage:(id)arg2 capitalization:(unsigned long long)arg3;
- (id)displayNameForRegion:(id)arg1 displayLanguage:(id)arg2 capitalization:(unsigned long long)arg3 short:(bool)arg4;
- (id)languageList;
- (id)localizedLanguageForLanguage:(id)arg1;
- (id)localizedNameForScript:(short)arg1;

@end
