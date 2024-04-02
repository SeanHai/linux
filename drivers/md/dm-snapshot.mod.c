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
	{ 0xb9338741, "kmem_cache_destroy" },
	{ 0x402b8281, "__request_module" },
	{ 0x36c2dd1d, "mempool_exit" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa5471459, "dm_bio_get_target_bio_nr" },
	{ 0x268682d2, "dm_bufio_forget" },
	{ 0xea2b701b, "up_read" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x754d539c, "strlen" },
	{ 0xa5472d82, "dm_get_device" },
	{ 0x6ff175aa, "dm_io" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xfc14bb2e, "dm_get_dev_t" },
	{ 0x9c256008, "dm_bufio_get_device_size" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x783b1e86, "dm_table_get_md" },
	{ 0x72f07bf4, "dm_bufio_set_minimum_buffers" },
	{ 0x6d0f1f89, "dm_table_get_mode" },
	{ 0x154c6338, "dm_kcopyd_client_destroy" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xc79bcd36, "dm_vcalloc" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x5dfc419b, "dm_register_target" },
	{ 0x9c7ed448, "dm_kcopyd_copy" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x91185511, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9e4faeef, "dm_io_client_destroy" },
	{ 0xef66eb71, "dm_put" },
	{ 0xece784c2, "rb_first" },
	{ 0x183fa88b, "mempool_alloc_slab" },
	{ 0xdb98c720, "dm_internal_suspend_fast" },
	{ 0xad84bef8, "dm_table_event" },
	{ 0xfb578fc5, "memset" },
	{ 0x61af2439, "dm_set_target_max_io_len" },
	{ 0x11089ac7, "_ctype" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xefde5167, "dm_unregister_target" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xe6024e59, "dm_bufio_release" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x9b53954a, "dm_bufio_client_create" },
	{ 0x8a7de935, "kmem_cache_free" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x6626afca, "down" },
	{ 0xedd02bb, "dm_suspended" },
	{ 0x2c456f2c, "generic_make_request" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x85142f62, "up_write" },
	{ 0x65baf559, "down_write" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x5484198, "bio_endio" },
	{ 0xeca7949e, "dm_bufio_client_destroy" },
	{ 0x1eb76e2a, "module_put" },
	{ 0x16e297c3, "bit_wait" },
	{ 0x9f984513, "strrchr" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x2b63e7fc, "kmem_cache_alloc" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x86c45796, "mempool_alloc" },
	{ 0x2eb50ce0, "dm_accept_partial_bio" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xd688716b, "dm_kcopyd_client_create" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x74b55fe, "mempool_free" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x8678453c, "kmem_cache_create" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x601f665f, "dm_io_client_create" },
	{ 0xa1d2413a, "dm_bufio_read" },
	{ 0x7880c781, "dm_kcopyd_prepare_callback" },
	{ 0x37a0cba, "kfree" },
	{ 0xfe43b76, "dm_hold" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4d754f2b, "mempool_init" },
	{ 0xcf2a6966, "up" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xa448e19f, "dm_bufio_prefetch" },
	{ 0x99d3a43c, "dm_table_get_size" },
	{ 0xca9360b5, "rb_next" },
	{ 0x93da61de, "dm_put_device" },
	{ 0x5133d363, "dm_per_bio_data" },
	{ 0x121da905, "queue_work_on" },
	{ 0x28318305, "snprintf" },
	{ 0x4b5fd49e, "dm_kcopyd_do_callback" },
	{ 0xe3fffae9, "__x86_indirect_thunk_rbp" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0x32d2ba9f, "__init_rwsem" },
	{ 0x85075cb1, "try_module_get" },
	{ 0x2ebeaa4f, "dm_internal_resume_fast" },
	{ 0x4863dc3, "bio_associate_blkg" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-mod,dm-bufio";


MODULE_INFO(srcversion, "B24E0FC66A746414EB965CF");
MODULE_INFO(rhelversion, "8.0");
