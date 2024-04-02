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
	{ 0x72b243d4, "free_dma" },
	{ 0x7054a3e4, "request_dma" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0x103b0514, "param_ops_charp" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x868acba5, "get_options" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x2612ff0c, "put_disk" },
	{ 0x21f7fd27, "blk_mq_free_tag_set" },
	{ 0xc1a89ec, "blk_cleanup_queue" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0x5c4265f6, "blk_unregister_region" },
	{ 0x3cf48db4, "platform_device_unregister" },
	{ 0xdd2723df, "del_gendisk" },
	{ 0x36fcc755, "device_add_disk" },
	{ 0x593216c9, "platform_device_register" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5eba9410, "__request_region" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x9e64fbfe, "rtc_cmos_read" },
	{ 0x7040fff9, "rtc_lock" },
	{ 0x7641fe8d, "blk_register_region" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x51722f38, "blk_queue_max_hw_sectors" },
	{ 0x807f9b7, "blk_queue_bounce_limit" },
	{ 0x65ff5490, "blk_mq_init_sq_queue" },
	{ 0x342ce1f6, "__alloc_disk_node" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xe288808d, "blk_mq_start_request" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x754d539c, "strlen" },
	{ 0x4a01a512, "__invalidate_device" },
	{ 0xc6cbbc89, "capable" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x28318305, "snprintf" },
	{ 0xcace2562, "__blk_mq_end_request" },
	{ 0x80ff8e87, "blk_update_request" },
	{ 0x2594c5e5, "get_disk_and_module" },
	{ 0x37a0cba, "kfree" },
	{ 0x999e8297, "vfree" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x8a7d1c31, "high_memory" },
	{ 0x175e33fb, "dma_spin_lock" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0x318f7969, "add_timer" },
	{ 0xfa5223cc, "del_timer" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe45c1b14, "__release_region" },
	{ 0xca27d0c4, "ioport_resource" },
	{ 0x257750f1, "check_disk_change" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x734d1ea8, "__free_pages" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xd943f820, "submit_bio" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x294477d6, "bio_add_page" },
	{ 0x4863dc3, "bio_associate_blkg" },
	{ 0xe81ad4d6, "bio_init" },
	{ 0xb81bf6c5, "alloc_pages_current" },
	{ 0x29361773, "complete" },
	{ 0x91715312, "sprintf" },
	{ 0x121da905, "queue_work_on" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xebca8b54, "mod_delayed_work_on" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xb5a8d234, "cancel_delayed_work" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x27e1a049, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x109525c0, "pv_cpu_ops" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pnp:dPNP0700*");
MODULE_ALIAS("acpi*:PNP0700:*");

MODULE_INFO(srcversion, "9307720E3270AF38A71F033");
MODULE_INFO(rhelversion, "8.0");
