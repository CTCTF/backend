exports.grade = function(team, key, callback) {
	if (typeof key === "string" && key.toLowerCase().indexOf("hopefully_real_banks_are_more_secure") != -1) {
		callback({
			correct: true,
			message: "Nice job!"
		});
	} else {
		callback({
			correct: false,
			message: "Hm... try again."
		});
	}
};