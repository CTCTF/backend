exports.grade = function(team, key, callback) {
	if (typeof key === "string" && key.toLowerCase().indexOf("9cdfb439c7876e703e307864c9167a15") != -1) {
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