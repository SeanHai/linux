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
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x23aa905b, "target_unregister_template" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xb4b724fe, "target_register_template" },
	{ 0x754d539c, "strlen" },
	{ 0x349cba85, "strchr" },
	{ 0x5dac020e, "qlt_lport_register" },
	{ 0x9dcddcf2, "qlt_rdy_to_xfer" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0xd3ee4e82, "core_tpg_register" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x11089ac7, "_ctype" },
	{ 0xe698f83e, "target_execute_cmd" },
	{ 0x6d89eedb, "transport_generic_request_failure" },
	{ 0xb54fb150, "transport_deregister_session" },
	{ 0x5f0f5fd4, "transport_deregister_session_configfs" },
	{ 0xf750b0c9, "target_wait_for_sess_cmds" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x49cc71e6, "target_alloc_session" },
	{ 0xe354bc7f, "target_sess_cmd_list_set_waiting" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x968fb45b, "btree_init" },
	{ 0xbf3c0c27, "qlt_xmit_response" },
	{ 0xd2eb24e3, "target_submit_cmd" },
	{ 0x50a66bbf, "target_submit_tmr" },
	{ 0x5f0447d8, "transport_generic_free_cmd" },
	{ 0xe27d9c58, "btree_insert" },
	{ 0xb0eec614, "btree_update" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x4a11deca, "btree_lookup" },
	{ 0x9e0bf70e, "qlt_stop_phase2" },
	{ 0x68ab424c, "btree_destroy" },
	{ 0x23505f2e, "btree_get_prev" },
	{ 0x302e9325, "btree_remove" },
	{ 0x326fbe7b, "btree_last" },
	{ 0xf331236f, "btree_geo32" },
	{ 0x999e8297, "vfree" },
	{ 0x2ea996d8, "qlt_lport_deregister" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3398ffbe, "target_depend_item" },
	{ 0xeb1033d2, "target_undepend_item" },
	{ 0x29361773, "complete" },
	{ 0xd8377870, "target_show_dynamic_sessions" },
	{ 0xcfaa5add, "target_put_sess_cmd" },
	{ 0xde668981, "qlt_free_mcmd" },
	{ 0xc36accaf, "qlt_free_cmd" },
	{ 0x1e82062b, "qlt_unreg_sess" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x3d16df3, "qlt_xmit_tm_rsp" },
	{ 0x532f6bd9, "qlt_abort_cmd" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0xaff06b0c, "scsi_host_get" },
	{ 0xe8afab37, "fc_vport_create" },
	{ 0x7b6bc055, "fc_vport_terminate" },
	{ 0xefd9029, "scsi_host_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xa29b3225, "core_tpg_deregister" },
	{ 0x91715312, "sprintf" },
	{ 0xf7d6636f, "current_task" },
	{ 0x28318305, "snprintf" },
	{ 0x27e1a049, "printk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x35e859b9, "qlt_enable_vha" },
	{ 0x2ff6b32a, "qlt_stop_phase1" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=target_core_mod,qla2xxx,scsi_transport_fc";


MODULE_INFO(srcversion, "43540FFDC8999E2585173D5");
MODULE_INFO(rhelversion, "8.0");
