### Explain the difference between INSERT, UPDATE, and DELETE triggers

| INSERT | UPDATE | DELETE |
| -------- | --------- | --------|
|A new row is inserted into the table.|An existing row is modified (updated).|A row is deleted from the table.|
|Track new data, log insertions, enforce rules on new data.|Track changes to data, log modifications, enforce rules.|Archive data before deletion, log deletions, prevent deletes.|
|Can be BEFORE or AFTER the insert.|Can be BEFORE or AFTER the update.|Can be BEFORE or AFTER the delete.|
|Can access the new row being inserted (NEW).|Can access both the old and new row (OLD and NEW).|Can access the deleted row (OLD).|