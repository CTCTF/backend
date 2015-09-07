exports.grade = function(team, key, callback) {
	if (typeof key === "string" && key.toLowerCase().indexOf("that_stego_wasnt_too_difficult_was_it".toLowerCase()) != -1) {
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