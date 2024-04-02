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
	{ 0xda6e998f, "devlink_port_register" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x94b8945c, "rht_bucket_nested" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x2ff3cc15, "thermal_cooling_device_unregister" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xa816dfec, "skb_copy" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0x162b8bf6, "devlink_resources_unregister" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x2f910e3c, "devlink_alloc" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x91715312, "sprintf" },
	{ 0xda000aa, "rhashtable_insert_slow" },
	{ 0xeaf9e3ee, "__tracepoint_devlink_hwmsg" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb46d4bd7, "devlink_port_type_ib_set" },
	{ 0x3b3cbe6, "rhashtable_destroy" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xb1ba6720, "rht_bucket_nested_insert" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0xc69c9a1f, "devm_hwmon_device_register_with_groups" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0x482bc218, "thermal_zone_device_register" },
	{ 0x5def83f9, "skb_push" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x9f80e627, "devlink_port_get_phys_port_name" },
	{ 0x34cef4cb, "devm_kfree" },
	{ 0xb8b78625, "devlink_port_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xdb9fcc6e, "thermal_zone_bind_cooling_device" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x83b9f17a, "thermal_zone_unbind_cooling_device" },
	{ 0x5db88162, "rhashtable_init" },
	{ 0xddcb57de, "devlink_free" },
	{ 0x7d4facf, "thermal_cooling_device_register" },
	{ 0xaf4c2873, "devlink_port_type_clear" },
	{ 0x1640fed1, "devlink_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa4cc4003, "devlink_port_attrs_set" },
	{ 0xe1cf2bb, "thermal_zone_device_update" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x121da905, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x28318305, "snprintf" },
	{ 0x509f625d, "consume_skb" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0xcab97d75, "devlink_unregister" },
	{ 0xda364c66, "devlink_port_type_eth_set" },
	{ 0x3111f1ae, "thermal_zone_device_unregister" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=devlink";


MODULE_INFO(srcversion, "D7EF0BF043585251D601D28");
MODULE_INFO(rhelversion, "8.0");
