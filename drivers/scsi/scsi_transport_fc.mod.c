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
	{ 0x2aec7605, "transport_class_register" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x66d95603, "scsi_remove_target" },
	{ 0xf03b8cb9, "blk_queue_rq_timeout" },
	{ 0x405c1144, "get_seconds" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf377d04f, "scsi_flush_work" },
	{ 0x33e885a7, "blk_mq_run_hw_queues" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xe637fa94, "dev_printk" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0xfede319f, "transport_destroy_device" },
	{ 0x6160f08f, "bsg_job_put" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x8eb1fa29, "attribute_container_unregister" },
	{ 0x3f0edaa0, "scsi_scan_target" },
	{ 0x91715312, "sprintf" },
	{ 0xab769aaf, "scsi_is_host_device" },
	{ 0x140bdb4f, "bsg_job_get" },
	{ 0xfb578fc5, "memset" },
	{ 0xb5a8d234, "cancel_delayed_work" },
	{ 0x91018733, "device_del" },
	{ 0x95e1b456, "scsi_queue_work" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x2b466fee, "transport_add_device" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x496e41db, "transport_configure_device" },
	{ 0x5a921311, "strncmp" },
	{ 0x5d3062b8, "attribute_container_register" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xbb6d8463, "sysfs_remove_link" },
	{ 0xcca62a76, "device_add" },
	{ 0x338ef2db, "transport_class_unregister" },
	{ 0xefd9029, "scsi_host_put" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x5ef90e8e, "sysfs_create_link" },
	{ 0x79b817b7, "scsi_target_unblock" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0xaff06b0c, "scsi_host_get" },
	{ 0x6ccf6eb0, "netlink_broadcast" },
	{ 0xd0c86c05, "put_device" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd1635b1e, "transport_setup_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x44d14e59, "blk_mq_end_request" },
	{ 0x85ffabba, "get_device" },
	{ 0x5700e62a, "__scsi_init_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x551be51f, "device_initialize" },
	{ 0xbb0f7fa6, "scsi_is_target_device" },
	{ 0xf3ffdb37, "scsi_nl_sock" },
	{ 0x9fa53b66, "transport_remove_device" },
	{ 0x121da905, "queue_work_on" },
	{ 0x28318305, "snprintf" },
	{ 0x108ce642, "scsi_target_block" },
	{ 0xc4f6749f, "bsg_job_done" },
	{ 0x76ca9e4e, "dev_set_name" },
	{ 0x3063a613, "bsg_remove_queue" },
	{ 0xb0cb15be, "bsg_setup_queue" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0xa005abe, "__nlmsg_put" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "614EE076F692DBA39928C78");
MODULE_INFO(rhelversion, "8.0");
