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
	{ 0x28cde093, "no_llseek" },
	{ 0x9a910d01, "simple_open" },
	{ 0xa047947, "class_destroy" },
	{ 0x5d11132b, "debugfs_remove_recursive" },
	{ 0xaa24938c, "unregister_virtio_driver" },
	{ 0xff5d0490, "register_virtio_driver" },
	{ 0xf5284f7e, "debugfs_create_dir" },
	{ 0x27e1a049, "printk" },
	{ 0xce2ba1bd, "__class_create" },
	{ 0x8d1b5691, "hvc_instantiate" },
	{ 0x903c69e0, "kobject_uevent" },
	{ 0xf0aeba88, "sysfs_create_group" },
	{ 0x9166fada, "strncpy" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x29361773, "complete" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x581fae3c, "__register_chrdev" },
	{ 0xb03676a8, "debugfs_create_file" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x2df52479, "device_create" },
	{ 0xe5e29cae, "cdev_add" },
	{ 0x62770c6d, "cdev_alloc" },
	{ 0x714889c4, "nonseekable_open" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x79a335e9, "debugfs_remove" },
	{ 0x4c89f920, "cdev_del" },
	{ 0x5e87e75, "device_destroy" },
	{ 0xdad01803, "sysfs_remove_group" },
	{ 0x1f0d10b9, "hvc_remove" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe4459357, "hvc_alloc" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x280160b5, "virtqueue_disable_cb" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x7236c12c, "__splice_from_pipe" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xff7b4e25, "pipe_unlock" },
	{ 0x7922c2d0, "pipe_lock" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x855a325a, "freezing_slow_path" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x1000e51, "schedule" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xf7d6636f, "current_task" },
	{ 0xb81bf6c5, "alloc_pages_current" },
	{ 0x244db10a, "unlock_page" },
	{ 0x9833bc0c, "hvc_kick" },
	{ 0xf2536a31, "kill_fasync" },
	{ 0x5d72bbe4, "hvc_poll" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7633f471, "__hvc_resize" },
	{ 0x90ce9d2e, "virtio_check_driver_offered_feature" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x448eac3e, "kmemdup" },
	{ 0xc811a6dd, "virtqueue_is_broken" },
	{ 0x4d91d37c, "virtqueue_add_outbuf" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5eda95a0, "virtqueue_detach_unused_buf" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x195b9e7e, "__put_devmap_managed_page" },
	{ 0x2a6bb061, "__put_page" },
	{ 0xf1e63929, "devmap_managed_key" },
	{ 0x3ff0c46a, "virtqueue_get_buf" },
	{ 0xeb6b6275, "fasync_helper" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x28318305, "snprintf" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x91715312, "sprintf" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x44d8b339, "virtqueue_kick" },
	{ 0xf6cbc819, "virtqueue_add_inbuf" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=virtio,virtio_ring";

MODULE_ALIAS("virtio:d00000003v*");

MODULE_INFO(srcversion, "4C8257149134E7205465B85");
MODULE_INFO(rhelversion, "8.0");
