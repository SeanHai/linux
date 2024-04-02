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
	{ 0x317a8ad6, "flush_work" },
	{ 0x2aec7605, "transport_class_register" },
	{ 0x743ac344, "class_find_device" },
	{ 0x421dfbb0, "bus_register" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x66d95603, "scsi_remove_target" },
	{ 0xf9a482f9, "msleep" },
	{ 0xaca1ff2f, "scsi_host_lookup" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xe637fa94, "dev_printk" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0xad27f361, "__warn_printk" },
	{ 0xfede319f, "transport_destroy_device" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x8eb1fa29, "attribute_container_unregister" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x5802f531, "ida_simple_get" },
	{ 0x3f0edaa0, "scsi_scan_target" },
	{ 0x91715312, "sprintf" },
	{ 0xdad01803, "sysfs_remove_group" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0xab769aaf, "scsi_is_host_device" },
	{ 0xfb578fc5, "memset" },
	{ 0xb5a8d234, "cancel_delayed_work" },
	{ 0x91018733, "device_del" },
	{ 0xd257960c, "device_register" },
	{ 0x95e1b456, "scsi_queue_work" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x2b466fee, "transport_add_device" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xd9ffe704, "device_find_child" },
	{ 0x27e1a049, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xf0aeba88, "sysfs_create_group" },
	{ 0xd75f1a32, "class_unregister" },
	{ 0xec815b6c, "netlink_kernel_release" },
	{ 0x99096e86, "ida_simple_remove" },
	{ 0x5d3062b8, "attribute_container_register" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x7d3c241f, "netlink_unicast" },
	{ 0xcca62a76, "device_add" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0x338ef2db, "transport_class_unregister" },
	{ 0xefd9029, "scsi_host_put" },
	{ 0xed946a48, "init_net" },
	{ 0x466c9ad3, "__class_register" },
	{ 0xd831f284, "bus_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x1eb76e2a, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x79b817b7, "scsi_target_unblock" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0xaff06b0c, "scsi_host_get" },
	{ 0x6ccf6eb0, "netlink_broadcast" },
	{ 0xd0c86c05, "put_device" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd1635b1e, "transport_setup_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x85ffabba, "get_device" },
	{ 0x5700e62a, "__scsi_init_queue" },
	{ 0x150e16f4, "device_for_each_child" },
	{ 0xc4459bca, "__netlink_kernel_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x551be51f, "device_initialize" },
	{ 0x6ecae48b, "device_unregister" },
	{ 0x9fa53b66, "transport_remove_device" },
	{ 0x121da905, "queue_work_on" },
	{ 0x28318305, "snprintf" },
	{ 0x108ce642, "scsi_target_block" },
	{ 0xc4f6749f, "bsg_job_done" },
	{ 0x76ca9e4e, "dev_set_name" },
	{ 0x3063a613, "bsg_remove_queue" },
	{ 0xb0cb15be, "bsg_setup_queue" },
	{ 0xa005abe, "__nlmsg_put" },
	{ 0x85075cb1, "try_module_get" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "CD29D580F43BF964161995D");
MODULE_INFO(rhelversion, "8.0");
