exports.grade = function(team, key, callback) {
	if (typeof key === "string" && key.toLowerCase().indexOf("i_h0pe_u_didnt_do_this_manually_lol".toLowerCase()) != -1) {
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