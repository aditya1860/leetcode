SELECT firstName , lastName,Address.city , Address.state
FROM Person
LEFT JOIN Address ON Address.personId =person.personId

