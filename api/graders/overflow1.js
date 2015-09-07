exports.grade = function(team, key, callback) {
	if (typeof key === "string" && key.toLowerCase().indexOf("buffer_overflows_are_pretty_bad") != -1) {
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