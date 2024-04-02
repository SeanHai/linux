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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x84502a47, "blk_status_to_errno" },
	{ 0x80a72f1a, "bio_alloc_bioset" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x6ff175aa, "dm_io" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb3b42a38, "mutex_trylock" },
	{ 0xb3687850, "out_of_line_wait_on_bit_lock" },
	{ 0x9e4faeef, "dm_io_client_destroy" },
	{ 0xde9360ba, "totalram_pages" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0xf7d6636f, "current_task" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x294477d6, "bio_add_page" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x8a7de935, "kmem_cache_free" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xdde3448f, "bio_put" },
	{ 0x58e3306d, "bit_wait_io" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd943f820, "submit_bio" },
	{ 0xf2215f74, "blk_finish_plug" },
	{ 0x2b63e7fc, "kmem_cache_alloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xa9a24d1f, "unregister_shrinker" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x8678453c, "kmem_cache_create" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0x601f665f, "dm_io_client_create" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xa9bd2676, "__vmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xc92f857d, "register_shrinker" },
	{ 0x28318305, "snprintf" },
	{ 0xe3fffae9, "__x86_indirect_thunk_rbp" },
	{ 0xc054ebe3, "param_ops_ulong" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0x7a9b37e8, "blk_start_plug" },
	{ 0x4863dc3, "bio_associate_blkg" },
	{ 0x8a35b432, "sme_me_mask" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-mod";


MODULE_INFO(srcversion, "6D15CC7B6D1D66F41B74309");
MODULE_INFO(rhelversion, "8.0");
