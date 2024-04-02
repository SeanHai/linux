#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xe6af07fa, "module_layout" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd116ad0, "__sbitmap_queue_get" },
	{ 0xfa4667d1, "fc_seq_release" },
	{ 0xb54fb150, "transport_deregister_session" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xcfaa5add, "target_put_sess_cmd" },
	{ 0xd3ee4e82, "core_tpg_register" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x58a2c07f, "fc_fc4_register_provider" },
	{ 0x3194d16c, "fc_lport_iterate" },
	{ 0x5f0447d8, "transport_generic_free_cmd" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xb4b724fe, "target_register_template" },
	{ 0xe354bc7f, "target_sess_cmd_list_set_waiting" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0xa29b3225, "core_tpg_deregister" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x87b8798d, "sg_next" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xea3c8e4e, "scsilun_to_int" },
	{ 0xd2eb24e3, "target_submit_cmd" },
	{ 0xd1306c13, "blocking_notifier_chain_unregister" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x91715312, "sprintf" },
	{ 0xe5747ef0, "fc_seq_assign" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0xfb578fc5, "memset" },
	{ 0x11089ac7, "_ctype" },
	{ 0x1adb5985, "_fc_frame_alloc" },
	{ 0xf7d6636f, "current_task" },
	{ 0x71215124, "fc_fill_reply_hdr" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x811811e0, "fc_exch_done" },
	{ 0x794a07f4, "core_tpg_set_initiator_node_tag" },
	{ 0xeaad96f9, "sbitmap_queue_clear" },
	{ 0x5f0f5fd4, "transport_deregister_session_configfs" },
	{ 0x55c2df2b, "fc_fc4_deregister_provider" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x2412cd9, "fc_frame_alloc_fill" },
	{ 0x6f31597b, "fc_seq_set_resp" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x23aa905b, "target_unregister_template" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x67d83e37, "blocking_notifier_chain_register" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x7f3407a7, "fc_seq_start_next" },
	{ 0x5003ccb, "fc_lport_notifier_head" },
	{ 0x49cc71e6, "target_alloc_session" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf750b0c9, "target_wait_for_sess_cmds" },
	{ 0x50a66bbf, "target_submit_tmr" },
	{ 0x498f836c, "fc_seq_send" },
	{ 0xe698f83e, "target_execute_cmd" },
	{ 0x121da905, "queue_work_on" },
	{ 0x28318305, "snprintf" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libfc,target_core_mod";


MODULE_INFO(srcversion, "6A8ACB59C012E8F804FF7E5");
MODULE_INFO(rhelversion, "8.0");
