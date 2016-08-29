/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAchievementDoctor : NSObject <HDAchievementEngineDelegate, _HKAchievementPredicateWorkoutsEnvironmentDataSource> {
    NSCalendar * _calendar;
    HKActivitySummary * _currentActivitySummary;
    HDTransientAchievementDataStore * _dataStore;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _workoutEndDates;
    NSMutableArray * _workouts;
    HKActivitySummary * _yesterdayActivitySummary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_achievementsGroupedByActivityCacheIndex:(id)arg1;
- (void)_addWorkout:(id)arg1;
- (id)_fetchAchievementsWithError:(id*)arg1;
- (id)_fetchActivitySummariesOrderedByCacheIndexWithError:(id*)arg1;
- (id)_fetchWorkoutsSortedByEndDateWithError:(id*)arg1;
- (bool)_isActivitySummary:(id)arg1 oneDayAfterActivitySummary:(id)arg2;
- (id)_newEmptyActivitySummaryWithStartDate:(id)arg1 startDateComponents:(id)arg2 calorieGoal:(id)arg3;
- (id)_queue_detectAchievementsForActivitySummaries:(id)arg1 workouts:(id)arg2 getResultingKeyValues:(id*)arg3;
- (bool)_queue_detectMissingAchievements:(id*)arg1 resultingKeyValues:(id*)arg2 error:(id*)arg3;
- (id)_queue_findExpectedAchievements:(id)arg1 missingFromAchievements:(id)arg2;
- (bool)_queue_saveMissingAchievements:(id)arg1 keyValues:(id)arg2 error:(id*)arg3;
- (id)_runAchievementEngine:(id)arg1 withPredicateEnvironment:(id)arg2 dataStore:(id)arg3 todayActivitySummary:(id)arg4 yesterdayActivitySummary:(id)arg5 currentDate:(id)arg6 addedWorkouts:(id)arg7;
- (long long)activitySummaryIndexToday;
- (double)briskMinutesToday;
- (double)briskMinutesYesterday;
- (double)caloriesBurnedToday;
- (double)caloriesBurnedYesterday;
- (id)currentDate;
- (id)energyBurnedGoalToday;
- (id)energyBurnedGoalYesterday;
- (id)init;
- (id)initWithProfile:(id)arg1 targetQueue:(id)arg2;
- (long long)mostRecentWorkoutAnchor;
- (void)runAchievementsFixupAsDryRun:(bool)arg1 persistingResultingKeyValues:(bool)arg2 completion:(id /* block */)arg3;
- (unsigned long long)standingHoursToday;
- (unsigned long long)standingHoursYesterday;
- (unsigned long long)stepsTakenToday;
- (unsigned long long)stepsTakenYesterday;
- (id)workoutsEndingAfterAnchor:(long long)arg1 newAnchor:(long long*)arg2;
- (id)workoutsInDateRangeStart:(id)arg1 end:(id)arg2;
- (id)workoutsOfType:(id)arg1;

@end
