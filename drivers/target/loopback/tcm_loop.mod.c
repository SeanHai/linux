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
	{ 0x9706372e, "scsi_change_queue_depth" },
	{ 0x23aa905b, "target_unregister_template" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xb9338741, "kmem_cache_destroy" },
	{ 0xb4b724fe, "target_register_template" },
	{ 0x93ac2ae4, "driver_register" },
	{ 0x421dfbb0, "bus_register" },
	{ 0x22d1eb5, "__root_device_register" },
	{ 0x8678453c, "kmem_cache_create" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x49cc71e6, "target_alloc_session" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x1e9673b2, "root_device_unregister" },
	{ 0xd831f284, "bus_unregister" },
	{ 0xc351790f, "driver_unregister" },
	{ 0xcfaa5add, "target_put_sess_cmd" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x50a66bbf, "target_submit_tmr" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x408bd9c1, "scsi_add_device" },
	{ 0xa29b3225, "core_tpg_deregister" },
	{ 0xb54fb150, "transport_deregister_session" },
	{ 0xe698f83e, "target_execute_cmd" },
	{ 0x29361773, "complete" },
	{ 0xb559ea59, "scsi_add_host_with_dma" },
	{ 0x9b5d76b9, "scsi_host_alloc" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2b63e7fc, "kmem_cache_alloc" },
	{ 0x3c92d494, "scmd_printk" },
	{ 0x894b45ad, "target_submit_cmd_map_sgls" },
	{ 0x8a7de935, "kmem_cache_free" },
	{ 0x5f0447d8, "transport_generic_free_cmd" },
	{ 0xb549bffc, "blk_queue_flag_set" },
	{ 0x41715c18, "seq_puts" },
	{ 0xefd9029, "scsi_host_put" },
	{ 0x7256f41e, "scsi_remove_host" },
	{ 0xd257960c, "device_register" },
	{ 0x76ca9e4e, "dev_set_name" },
	{ 0x754d539c, "strlen" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0x6ecae48b, "device_unregister" },
	{ 0xd3ee4e82, "core_tpg_register" },
	{ 0x733dc065, "scsi_device_put" },
	{ 0xf50eb3eb, "scsi_remove_device" },
	{ 0xd2491c3c, "scsi_device_lookup" },
	{ 0x37a0cba, "kfree" },
	{ 0x5173ee2c, "core_allocate_nexus_loss_ua" },
	{ 0x28318305, "snprintf" },
	{ 0x91715312, "sprintf" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0x27e1a049, "printk" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=target_core_mod";


MODULE_INFO(srcversion, "34C23BD4327AF1D550BCBD9");
MODULE_INFO(rhelversion, "8.0");
