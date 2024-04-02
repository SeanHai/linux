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
	{ 0x135d5c6a, "acpi_bus_register_driver" },
	{ 0x54066c31, "nvdimm_cmd_mask" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xee0ed14, "nd_blk_region_provider_data" },
	{ 0x1888704c, "nd_blk_region_to_dimm" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0x114a3a5a, "nvdimm_bus_attribute_group" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x8e82828e, "iomem_resource" },
	{ 0x1b17e06c, "kstrtoll" },
	{ 0xf6a28554, "region_intersects" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xaf076aec, "nd_fletcher64" },
	{ 0x2c635527, "arch_invalidate_pmem" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0xdd18a993, "acpi_check_dsm" },
	{ 0x923b59e2, "nvdimm_attribute_group" },
	{ 0x1b98c4db, "nd_blk_region_set_provider_data" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0xb8b2b1f7, "mce_register_decode_chain" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x43df97d8, "nvdimm_kobj" },
	{ 0x7cf7fd06, "nvdimm_pmem_region_create" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xf0ef15b4, "list_sort" },
	{ 0x581f81b0, "kernfs_put" },
	{ 0xb89b6e6b, "guid_parse" },
	{ 0x42c62921, "acpi_bus_unregister_driver" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x1877ca13, "mce_is_memory_error" },
	{ 0xb37842ba, "nd_cmd_in_size" },
	{ 0x16cdc340, "acpi_get_table" },
	{ 0xf2fca274, "nd_region_dev" },
	{ 0x91715312, "sprintf" },
	{ 0x60fa917c, "nvdimm_bus_register" },
	{ 0x677b3808, "nd_numa_attribute_group" },
	{ 0x1bc69950, "nvdimm_flush" },
	{ 0xa05e7ce2, "insert_resource" },
	{ 0xfb578fc5, "memset" },
	{ 0x762c2cf5, "nd_region_acquire_lane" },
	{ 0x230b2973, "nvdimm_provider_data" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x89054fcc, "nvdimm_volatile_region_create" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xc1dc0335, "devm_nvdimm_memremap" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x835b0e3c, "nd_region_attribute_group" },
	{ 0x950d120f, "to_nvdimm_bus_dev" },
	{ 0xb42b006e, "nvdimm_name" },
	{ 0x5624b242, "nd_blk_memremap_flags" },
	{ 0x34dd2ccb, "kernfs_find_and_get_ns" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x42dc7cd9, "nvdimm_bus_unregister" },
	{ 0xb501b2df, "nd_cmd_dimm_desc" },
	{ 0xad6be09c, "nd_mapping_attribute_group" },
	{ 0xe3a53f4c, "sort" },
	{ 0x26d08ce0, "nd_cmd_out_size" },
	{ 0x34cef4cb, "devm_kfree" },
	{ 0x1e91f3c2, "nd_region_release_lane" },
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x5f7763cc, "nd_device_attribute_group" },
	{ 0x4a167bb0, "to_nd_desc" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0x92b99a33, "acpi_put_table" },
	{ 0x7757626e, "work_busy" },
	{ 0xb22d81b4, "remove_resource" },
	{ 0xae1e04cc, "nvdimm_has_flush" },
	{ 0x9e3f36ab, "devm_add_action" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xe6478472, "_dev_info" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd5e5148e, "acpi_find_child_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x95852e96, "to_nvdimm_bus" },
	{ 0xfc4e2c61, "kernfs_notify" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x8384647a, "acpi_map_pxm_to_online_node" },
	{ 0xe94c307f, "nvdimm_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2ced1b78, "nvdimm_bus_check_dimm_count" },
	{ 0xbdae691d, "to_nd_region" },
	{ 0x4d95d6d1, "memcpy_flushcache" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xf2d7d87, "mce_unregister_decode_chain" },
	{ 0x337156b7, "to_nvdimm" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0xa01a8d9b, "nd_cmd_bus_desc" },
	{ 0xc054ebe3, "param_ops_ulong" },
	{ 0x3325c160, "nvdimm_bus_add_badrange" },
	{ 0x6654c94, "nd_region_provider_data" },
	{ 0x3f1e2a7f, "to_nd_blk_region" },
	{ 0xe935e55e, "nvdimm_region_notify" },
	{ 0x25870035, "nvdimm_blk_region_create" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libnvdimm";

MODULE_ALIAS("acpi*:ACPI0012:*");

MODULE_INFO(srcversion, "0AB0E624630D7F0AC03D9B1");
MODULE_INFO(rhelversion, "8.0");
