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
	{ 0x8f648a94, "param_ops_uint" },
	{ 0xe9b41467, "param_ops_string" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xc351790f, "driver_unregister" },
	{ 0x999e8297, "vfree" },
	{ 0x1e9673b2, "root_device_unregister" },
	{ 0xd831f284, "bus_unregister" },
	{ 0x93ac2ae4, "driver_register" },
	{ 0x421dfbb0, "bus_register" },
	{ 0x22d1eb5, "__root_device_register" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0xdf243169, "hrtimer_init" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9181e45, "hrtimer_start_range_ns" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x7efc8dd6, "blk_mq_unique_tag" },
	{ 0xe3fffae9, "__x86_indirect_thunk_rbp" },
	{ 0x28318305, "snprintf" },
	{ 0xd257960c, "device_register" },
	{ 0x76ca9e4e, "dev_set_name" },
	{ 0x1ad357ca, "blk_queue_max_segment_size" },
	{ 0x69e683de, "uuid_gen" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x76d1f14a, "__scsi_iterate_devices" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x6ecae48b, "device_unregister" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0xa16c8613, "_raw_read_unlock_irqrestore" },
	{ 0x736b5662, "_raw_read_lock_irqsave" },
	{ 0x1c1b9f8e, "_raw_write_unlock_irqrestore" },
	{ 0xe25ee9d3, "_raw_write_lock_irqsave" },
	{ 0xc666a132, "crc_t10dif" },
	{ 0x20eadeb6, "ip_compute_csum" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x7256f41e, "scsi_remove_host" },
	{ 0x373db350, "kstrtoint" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xefd9029, "scsi_host_put" },
	{ 0x7bdd5516, "scsi_scan_host" },
	{ 0xb559ea59, "scsi_add_host_with_dma" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x9b5d76b9, "scsi_host_alloc" },
	{ 0x8112b3d2, "scsi_build_sense_buffer" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xd0fe8d51, "sg_pcopy_from_buffer" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0x110b1d91, "sg_miter_stop" },
	{ 0x8fc50580, "sg_miter_next" },
	{ 0x69acdf38, "memcpy" },
	{ 0x57a9e884, "sg_miter_start" },
	{ 0x8ac743de, "sg_copy_buffer" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0xf97d1a04, "hrtimer_cancel" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0xb549bffc, "blk_queue_flag_set" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xb99b4c70, "sdev_prefix_printk" },
	{ 0x9706372e, "scsi_change_queue_depth" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xb6a68816, "find_last_bit" },
	{ 0xc41033c1, "seq_printf" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xfb578fc5, "memset" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xc6cbbc89, "capable" },
	{ 0x37a0cba, "kfree" },
	{ 0x27e1a049, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "EE26ECFC9C1B347FD460F80");
MODULE_INFO(rhelversion, "8.0");
