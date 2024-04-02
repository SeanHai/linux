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
	{ 0xefde5167, "dm_unregister_target" },
	{ 0x5dfc419b, "dm_register_target" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x5484198, "bio_endio" },
	{ 0x70146f8c, "iov_iter_revert" },
	{ 0x540fab50, "_copy_from_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf30a2238, "dax_copy_from_iter" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x855a325a, "freezing_slow_path" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc2e1f262, "kthread_stop" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x754d539c, "strlen" },
	{ 0xaf6ae696, "kstrndup" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x93da61de, "dm_put_device" },
	{ 0xeb81585a, "kthread_create_on_node" },
	{ 0xa5472d82, "dm_get_device" },
	{ 0x6d0f1f89, "dm_table_get_mode" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x734d1ea8, "__free_pages" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd943f820, "submit_bio" },
	{ 0x294477d6, "bio_add_page" },
	{ 0xfb578fc5, "memset" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xf7d6636f, "current_task" },
	{ 0xb81bf6c5, "alloc_pages_current" },
	{ 0x4863dc3, "bio_associate_blkg" },
	{ 0x80a72f1a, "bio_alloc_bioset" },
	{ 0x987ed54e, "fs_bio_set" },
	{ 0x27e1a049, "printk" },
	{ 0xdde3448f, "bio_put" },
	{ 0x3680edd9, "bio_free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xa975ccbd, "wake_up_process" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x5133d363, "dm_per_bio_data" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0x3efd1889, "dax_direct_access" },
	{ 0xdc59091, "dax_copy_to_iter" },
	{ 0x17faafdc, "bdev_dax_pgoff" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x58388972, "pv_lock_ops" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-mod";


MODULE_INFO(srcversion, "18BD6DAF006BFFE473A28E2");
MODULE_INFO(rhelversion, "8.0");
