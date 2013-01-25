#ifndef  MOLE2_DB_ENUM_H
#define  MOLE2_DB_ENUM_H

/*命令定义*/	
enum  enum_mole2_db_cmd{
	 mole2_login_cmd		=	0x0801, /**/
	 mole2_online_login_cmd		=	0x0819, /**/
	 day_sub_ssid_count_cmd		=	0x0820, /*减少count*/
	 mole2_get_vip_flag_cmd		=	0x082E, /*vip标志*/
	 mole2_get_vip_buff_cmd		=	0x083C, /*获取vip道具使用列表*/
	 mole2_set_skill_def_level_cmd		=	0x083D, /**/
	 get_all_pet_type_cmd		=	0x083F, /*拉取所有宠物的typeid*/
	 mole2_set_flag_bits_cmd		=	0x084A, /*flag=((flag AND mask) OR bits);*/
	 mole2_get_relation_cmd		=	0x084B, /**/
	 mole2_add_relation_uid_cmd		=	0x084C, /**/
	 mole2_del_relation_uid_cmd		=	0x084D, /**/
	 mole2_add_relation_exp_cmd		=	0x084E, /**/
	 mole2_get_type_pets_cmd		=	0x084F, /**/
	 mole2_set_levelup_time_cmd		=	0x0854, /**/
	 mole2_add_graduation_uid_cmd		=	0x0855, /**/
	 mole2_reset_relation_flag_cmd		=	0x0856, /**/
	 mole2_add_skill_exp_cmd		=	0x0857, /*增加减少技能经验树经验*/
	 buy_item_in_mall_cmd		=	0x0858, /*商城购买物品*/
	 buy_cloth_in_mall_cmd		=	0x0859, /*在商城购买装备*/
	 mole2_get_day_count_cmd		=	0x085A, /**/
	 mole2_add_day_count_cmd		=	0x085B, /**/
	 mall_chk_cloths_limits_cmd		=	0x085C, /*检查装扮是否可增加*/
	 mole2_add_relation_val_cmd		=	0x085D, /**/
	 mole2_set_pet_flag_cmd		=	0x085E, /**/
	 mole2_set_system_time_cmd		=	0x0879, /**/
	 mole2_petfight_get_rank_cmd		=	0x0890, /*拉取精灵战斗的前20排名*/
	 mole2_petfight_get_user_rank_cmd		=	0x0891, /*拉取精灵战斗中的用户排名*/
	 mole2_petfight_set_scores_cmd		=	0x0892, /*精灵战斗中设置分数*/
	 mole2_user_get_shop_name_cmd		=	0x0893, /*拉取店铺名字*/
	 mole2_user_set_shop_name_cmd		=	0x0894, /*设置店铺名字*/
	 mole2_day_set_ssid_count_cmd		=	0x0896, /*设置ssid count totalcnt*/
	 mole2_get_user_cli_buff_cmd		=	0x08D2, /*获取客户端buff*/
	 mole2_get_user_sql_cmd		=	0x08D8, /*得到用户信息的sql语句*/
	 mole2_init_feed_count_cmd		=	0x08D9, /*初始化孵化次数*/
	 mole2_user_user_create_role_cmd		=	0x0902, /*mole2:用户注册角色信息*/
	 mole2_user_user_update_nick_cmd		=	0x0903, /**/
	 mole2_set_vip_buff_cmd		=	0x093D, /*设置vip道具使用情况*/
	 mole2_del_vip_buff_cmd		=	0x093E, /*删除vip道具使用信息*/
	 mole2_user_pet_skill_add_cmd		=	0x0945, /*添加宠物技能*/
	 mole2_user_pet_skill_del_cmd		=	0x0949, /*删除宠物技能*/
	 mole2_user_del_title_cmd		=	0x094A, /*删除称号*/
	 mole2_set_pet_attributes_cmd		=	0x09A7, /*设置宠物属性*/
	 mole2_set_user_cli_buff_cmd		=	0x09D3, /*设置客户端buff*/
	 mole2_user_set_vip_info_cmd		=	0x09D4, /*设置vip信息*/
	 mole2_user_add_vip_ex_val_cmd		=	0x09D5, /*增加vip额外能量值*/
	 mole2_user_set_vip_level_cmd		=	0x09D6, /*设置vip等级*/
	 mole2_user_set_vip_base_val_cmd		=	0x09D7, /*设置用户成长值下限*/
	 mole2_set_vip_activity_cmd		=	0x09D8, /*修改 vip 充值时间(+/-)*/
	 mole2_set_vip_activity3_cmd		=	0x09D9, /*设置vip_activity_3*/
	 comm_get_dbser_version_cmd		=	0x1000, /*得到程序的版本信息*/
	 su_mole2_get_user_cmd		=	0x3E00, /*拉取用户信息*/
	 su_mole2_get_tasks_cmd		=	0x3E01, /*拉取任务列表*/
	 su_mole2_del_task_cmd		=	0x3E02, /*删除任务*/
	 su_mole2_get_items_cmd		=	0x3E03, /*拉取用户物品列表*/
	 su_mole2_add_item_cmd		=	0x3E04, /*添加物品*/
	 su_mole2_get_skills_cmd		=	0x3E05, /*拉取人物技能列表*/
	 su_mole2_add_skill_cmd		=	0x3E06, /*添加人物技能*/
	 su_mole2_del_skill_cmd		=	0x3E07, /*删除任务技能*/
	 su_mole2_get_pets_cmd		=	0x3E08, /*拉取宠物列表*/
	 su_mole2_add_pet_cmd		=	0x3E09, /*添加宠物*/
	 su_mole2_set_pet_cmd		=	0x3E0A, /*设置宠物*/
	 su_mole2_del_pet_cmd		=	0x3E0B, /*删除宠物*/
	 su_mole2_get_friends_cmd		=	0x3E0C, /*拉取好友列表*/
	 su_mole2_add_friend_cmd		=	0x3E0D, /*添加好友*/
	 su_mole2_del_friend_cmd		=	0x3E0E, /*删除好友*/
	 su_mole2_get_blacks_cmd		=	0x3E0F, /*拉取黑名单列表*/
	 su_mole2_add_black_cmd		=	0x3E10, /*添加米米号到黑名单*/
	 su_mole2_del_black_cmd		=	0x3E11, /*删除黑名单中的某个米米号*/
	 su_mole2_add_mail_cmd		=	0x3E12, /*添加邮件*/
	 su_mole2_get_vip_flag_cmd		=	0x3E13, /*拉取vip标志*/
	 su_mole2_get_expbox_cmd		=	0x3E14, /*拉取经验树经验值*/
	 su_mole2_get_ban_flag_cmd		=	0x3E15, /*拉取封号标志*/
	 su_mole2_set_ban_flag_cmd		=	0x3E16, /*设置封号标志*/
	 su_mole2_set_expbox_cmd		=	0x3E17, /*设置经验树经验值*/
	 su_mole2_set_nick_cmd		=	0x3E18, /*设置昵称*/
	 su_mole2_set_profession_cmd		=	0x3E19, /*设置职业*/
	 su_mole2_add_xiaomee_cmd		=	0x3E1A, /*更改星豆数量*/
	 su_mole2_set_base_attr_cmd		=	0x3E1B, /*设置几项基本属性*/
	 su_mole2_set_position_cmd		=	0x3E1C, /*设置对战前后排*/
	 su_mole2_set_field_value_cmd		=	0x3E1D, /*<font color=red>修改人物/宠物属性</font>*/
	 su_mole2_get_vip_info_cmd		=	0x3E1E, /**/
	 su_mole2_set_task_cmd		=	0x3E1F, /**/
	 mole2_get_all_info_cmd		=	0x3E20, /*得到用户的信息*/
	 su_mole2_get_equips_cmd		=	0x3E21, /*拉取装备信息*/
	 su_mole2_delete_cloths_cmd		=	0x3E22, /*删除装备*/
	 su_mole2_get_day_items_cmd		=	0x3E23, /*拉取dayitems*/
	 su_mole2_add_cloth_cmd		=	0x3E24, /**/
	 su_mole2_delete_title_cmd		=	0x3E25, /**/
	 su_mole2_add_title_cmd		=	0x3E26, /**/
	 su_mole2_add_task_cmd		=	0x3E27, /**/
	 su_mole2_simple_opt_cmd		=	0x3E30, /*简单操作*/
	 su_get_last_pet_list_cmd		=	0x3E31, /*得到最近的获得的宠物列表*/
	 mole2_get_survey_cmd		=	0xD426, /*拉取调查表*/
	 mole2_reply_question_cmd		=	0xD427, /*回复调查问题*/
	 mole2_set_hero_team_cmd		=	0xD428, /*报名勇士杯*/
	 get_rand_info_range_cmd		=	0xD429, /*拉取randid区间信息*/
	 mole2_add_medals_cmd		=	0xD42A, /*贡献奖牌*/
	 mole2_get_team_rank_cmd		=	0xD42B, /*获取勇士杯队伍排名*/
	 mole2_get_user_rank_cmd		=	0xD42C, /*获取勇士杯用户排名*/
	 mole2_get_hero_team_cmd		=	0xD42D, /*获取勇者杯队伍*/
	 log_vip_item_cmd		=	0xD430, /*记录vip 道具*/
	 mole2_add_val_cmd		=	0xD431, /*增加某值  有每日限制*/
	 mole2_get_val_cmd		=	0xD432, /*获取某值  有每日限制*/
	 mole2_get_val_by_id_cmd		=	0xD435, /**/
	 mole2_user_update_rank_cmd		=	0xD436, /**/
	 mole2_get_task_rank_cmd		=	0xD437, /*获取任务排名top10*/
	 su_switch_send_msg_cmd		=	0xF234, /**/
	 su_switch_mail_notify_cmd		=	0xF23B, /**/
	 su_switch_kick_player_cmd		=	0xF618, /**/

};

/*错误码定义*/	
enum  enum_mole2_db_error{
	 NO_DEFINE_ERR		=	1000, /*没有定义*/
	 SYS_ERR		=	1001, /*系统出错 一般是内存出错*/
	 DB_ERR		=	1002, /*数据库出错*/
	 NET_ERR		=	1003, /*NET出错*/
	 CMDID_NODEFINE_ERR		=	1004, /*命令ID没有定义*/
	 PROTO_LEN_ERR		=	1005, /*协议长度不符合*/
	 VALUE_OUT_OF_RANGE_ERR		=	1006, /*数值越界*/
	 FLAY_ALREADY_SET_ERR		=	1007, /*要设置的flag和原有一致*/
	 VALUE_ISNOT_FULL_ERR		=	1008, /*数据不完整*/
	 ENUM_OUT_OF_RANGE_ERR		=	1009, /*枚举越界:不在类型的限定范围.(如某一字段只允许[0,1],却填了2)*/
	 PROTO_RETURN_LEN_ERR		=	1010, /*返回报文长度有问题*/
	 DB_DATA_ERR		=	1011, /*数据库中数据有误*/
	 NET_SEND_ERR		=	1012, /*无*/
	 NET_RECV_ERR		=	1013, /*无*/
	 KEY_EXISTED_ERR		=	1014, /*KEY 已经存在了*/
	 KEY_NOFIND_ERR		=	1015, /*KEY 不存在*/
	 DB_CANNOT_UPDATE_ERR		=	1016, /*DB不允许更新*/
	 NET_TIMEOUT_ERR		=	1017, /*网络超时*/
	 CMD_EXEC_MAX_PER_MINUTE_ERR		=	1018, /*当然命令号每分钟超过最大限制*/
	 CMD_MD5_TAG_ERR		=	1021, /*当然命令的md5_tags检查失败*/
	 CHECK_PASSWD_ERR		=	1103, /*登入时，检查用户名和密码出错*/
	 USER_ID_EXISTED_ERR		=	1104, /*在insert，米米号已存在*/
	 USER_ID_NOFIND_ERR		=	1105, /*在select update, delete 时，米米号不存在*/
	 BAN_FOREVER_ERR		=	1120, /*已被封号*/
	 BAN_24HOURS_ERR		=	1121, /*被封号24小时*/
	 BAN_14DAYS_ERR		=	2541, /*被封号14天*/
	 BAN_7DAYS_ERR		=	2542, /*被封号7天*/
	 MOLE2_OFFLINE_MSG_MAX_ERR		=	3101, /*离线消息太长了*/
	 MOLE2_BLACKID_EXISTED_ERR		=	3103, /*黑名单用户已经存在*/
	 MOLE2_BLACKID_NOFIND_ERR		=	3104, /*黑名单用户账号不存在*/
	 MOLE2_FRIEND_MAX_ERR		=	3105, /*好友个数越过限制*/
	 MOLE2_ATTIRE_KEY_NOFIND_ERR		=	3107, /*没有指定的装扮信息（装备不存在）*/
	 MOLE2_ATTIRE_KEY_EXISTED_ERR		=	3108, /*相同关键字的装备已经存在*/
	 MOLE2_PETID_NOFIND_ERR		=	3109, /*指定宠物不存在*/
	 MOLE2_PETID_EXISTED_ERR		=	3110, /*宠物ID已经存在*/
	 MOLE2_SKILLID_EXISTED_ERR		=	3111, /*指定技能ID已经存在*/
	 MOLE2_SKILLID_NOFIND_ERR		=	3112, /*指定技能ID不存在*/
	 MOLE2_TASK_EXISTED_ERR		=	3113, /*指定任务已存在*/
	 MOLE2_TASK_NOFIND_ERR		=	3114, /*指定任务不存在*/
	 MOLE2_TASK_RECVED_ERR		=	3115, /*任务重复接收错误*/
	 MOLE2_TASK_FINISHED_ERR		=	3116, /*接已完成任务错误*/
	 MOLE2_TASK_PER_TYPE_MAX_ERR		=	3117, /*该类任务同时接受达到上限*/
	 MOLE2_TASK_REPEAT_MAX_ERR		=	3118, /*重复任务次数已达上限*/
	 MOLE2_TASK_NOT_ONGOING_ERR		=	3119, /*任务不在进行中*/
	 MOLE2_TASK_PARENT_NOT_FIN_ERR		=	3120, /*依赖的父任务没有完成*/
	 MOLE2_ITEM_ID_NOFIND_ERR		=	3121, /*背包中没有对应ID的物品*/
	 MOLE2_ITEM_ID_EXISTED_ERR		=	3122, /*物品ID已在列表中*/
	 MOLE2_ITEM_BAG_FULL_ERR		=	3123, /*物品包裹已满*/
	 MOLE2_ITEM_NOT_ENOUGH_ERR		=	3124, /*包裹里的物品不够减少*/
	 MOLE2_ATTR_ADD_NOT_ENOUGH_ERR		=	3125, /*人物属性点不够*/
	 MOLE2_ATTR_MAX_ERR		=	3126, /*人物属性达到上限*/
	 MOLE2_RAND_INFO_EXISTED_ERR		=	3127, /*随机信息已存在*/
	 MOLE2_RAND_INFO_NOFIND_ERR		=	3128, /*随机信息不存在*/
	 MOLE2_RAND_REPEAT_MAX_ERR		=	3129, /*获取随机物品重复次数上限*/
	 RAND_ITEM_COUNT_FULL_ERR		=	3130, /*获得活动物品达到上限*/
	 MOLE2_KEY_EXIST_ERR		=	3131, /*主键重复*/
	 MOLE2_KEY_NOT_EXIST_ERR		=	3132, /*无*/
	 USER_LOGIN_NOFIND_ERR		=	4327, /*update 时数据库中无相应数据*/
	 LOGIN_INFO_WRITE_ERR		=	4328, /*写入登录信息错误*/
	 LOGIN_INFO_READ_ERR		=	4329, /*读出登录信息错误*/
	 LOGIN_INFO_OPEN_ERR		=	4330, /*打开文件失败*/
	 MOLE2_ITEM_COUNT_MAX_ERR		=	4331, /*包裹物品携带数量达到上限*/
	 MOLE2_USER_HAS_ACTIVED_ERR		=	4332, /*激活码-用户账户已经被激活*/
	 MOLE2_ACTIVATION_HAS_USED_ERR		=	4333, /*激活码-激活码已经被使用*/
	 MOLE2_ACTIVATION_NOFIND_ERR		=	4334, /*激活码-激活码未找到*/
	 USER_MAP_MAPID_NOFIND_ERR		=	4335, /*地图ID未找到*/
	 USER_MAP_FLIGHT_PATH_ERR		=	4336, /*没飞行点权限*/
	 USER_MAP_MAPID_EXISTED_ERR		=	4337, /*地图id已经存在*/
	 ITEM_HANDBOOK_ID_EXISTED_ERR		=	4338, /*物品图鉴中id已经存在*/
	 ITEM_HANDBOOK_ID_NOFIND_ERR		=	4339, /*物品图鉴中id未找到*/
	 MONSTER_HANDBOOK_ID_EXISTED_ERR		=	4340, /*怪物图鉴中id已经存在*/
	 MONSTER_HANDBOOK_ID_NOFIND_ERR		=	4341, /*怪物图鉴中id未找到*/
	 ITEM_HANDBOOK_STATE_IS_ON_ERR		=	4342, /*物品图鉴信息已经开启*/
	 MONSTER_HANDBOOK_STATE_IS_ON_ERR		=	4343, /*怪物图鉴信息已经开启*/
	 USER_TITLE_TITLEID_EXISTED_ERR		=	4344, /*用户称号已经存在*/
	 USER_TITLE_TITLEID_NOFIND_ERR		=	4345, /*用户称号不存在*/
	 UER_MAP_BOSS_POSITION_ON_ERR		=	4346, /*boss点已经激活*/
	 TASK_NO_FINISH_ERR		=	4347, /*任务未完成*/
	 ITEM_STORAGE_COUNT_ERR		=	4348, /*存取物品错误*/
	 MAILID_EXISTED_ERR		=	4349, /*邮件ID已存在*/
	 MAILID_NOFIND_ERR		=	4350, /*邮件ID找不到*/
	 MAIL_COUNT_MAX_ERR		=	4351, /*邮件达到上限*/
	 MOLE2_PRESENT_ID_NOFIND_ERR		=	4352, /*神奇密码卡不存在*/
	 MOLE2_PRESENT_UID_EXISTS_ERR		=	4353, /*神奇密码卡用户存在*/
	 MOLE2_PRESENT_UID_NOFIND_ERR		=	4354, /*用户id未找到*/
	 MOLE2_PRESENT_ID_USED_ERR		=	4355, /*神奇密码卡已经使用了*/
	 MOLE2_ACTIVATION_ID_NOFIND_ERR		=	4356, /*激活码不存在*/
	 MOLE2_ACTIVATION_UID_EXISTS_ERR		=	4357, /*用户存在*/
	 MOLE2_ACTIVATION_UID_NOFIND_ERR		=	4358, /*用户id未找到*/
	 MOLE2_ACTIVATION_ID_USED_ERR		=	4359, /*激活码已经使用了*/
	 MOLE2_ACTIVATION_TRY_ERR		=	4360, /*激活码尝试次数到达上限*/
	 VALUE_MORE_THAN_LIMIT_ERR		=	4361, /*数值已超过上限*/
	 VALUE_NOT_ENOUGH_ERR		=	4362, /*数量不足*/
	 USER_RELATION_FLAG_ERR		=	4363, /*师徒标志不匹配*/
	 USER_RELATION_LIMIT_ERR		=	4364, /*师徒人数已到上限*/
	 MOLE2_ID_EXISTED_ERR_ERR		=	4365, /*今天不能删除*/
	 USER_NOT_TEACHER_ERR		=	4366, /*用户不是师傅,非法操作*/
	 TEAM_BALANCE_ERR		=	4367, /**/
	 USER_RELATION_LEVEL_ERR		=	4368, /**/
	 MOLE2_ID_NOT_EXISTED_ERR		=	4369, /**/

};



#endif // MOLE2_DB_ENUM_H
