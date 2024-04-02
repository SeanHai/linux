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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x421dfbb0, "bus_register" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x93ac2ae4, "driver_register" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xe637fa94, "dev_printk" },
	{ 0x20a789ac, "irq_set_chip_data" },
	{ 0x5494c2, "input_alloc_absinfo" },
	{ 0x99e44e4a, "irq_find_mapping" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x448eac3e, "kmemdup" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xbb786aaf, "serio_interrupt" },
	{ 0x757b3161, "irq_create_mapping" },
	{ 0xdad01803, "sysfs_remove_group" },
	{ 0xd7d5f9f1, "devm_kasprintf" },
	{ 0x822030b4, "input_set_abs_params" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xfe7843b, "input_event" },
	{ 0xdcc5fb23, "serio_unregister_port" },
	{ 0xa084749a, "__bitmap_or" },
	{ 0xe8ea9f09, "__irq_domain_add" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0x91018733, "device_del" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xf0aeba88, "sysfs_create_group" },
	{ 0xc351790f, "driver_unregister" },
	{ 0x5792f848, "strlcpy" },
	{ 0xd4c7656d, "input_set_capability" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xf6717f46, "irq_get_irq_data" },
	{ 0x1e429171, "input_mt_init_slots" },
	{ 0xcca62a76, "device_add" },
	{ 0x34cef4cb, "devm_kfree" },
	{ 0xd831f284, "bus_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe6478472, "_dev_info" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xe2f860d, "handle_simple_irq" },
	{ 0xd0c86c05, "put_device" },
	{ 0x8df2a7e4, "irq_set_chip_and_handler_name" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xadfdfcef, "__bitmap_andnot" },
	{ 0xf789deff, "input_register_device" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9cb06c7a, "irq_domain_simple_ops" },
	{ 0x1ec97303, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x39b52d19, "__bitmap_and" },
	{ 0x1358df84, "__serio_register_port" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x5296e7b0, "devm_input_allocate_device" },
	{ 0x551be51f, "device_initialize" },
	{ 0x480ba3d3, "input_mt_report_slot_state" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0x2c7db649, "irq_dispose_mapping" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x4f7f8511, "irq_domain_remove" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xa1654d34, "input_mt_sync_frame" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x28318305, "snprintf" },
	{ 0x76ca9e4e, "dev_set_name" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x25d35c2d, "devm_request_threaded_irq" },
	{ 0xc1f4ce8d, "input_mt_assign_slots" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "073D36BE0EB2324408DCEFC");
MODULE_INFO(rhelversion, "8.0");
