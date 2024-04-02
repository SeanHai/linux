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
	{ 0xdbbe7391, "crypto_aead_setauthsize" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xeb81585a, "kthread_create_on_node" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xa5472d82, "dm_get_device" },
	{ 0x6d0f1f89, "dm_table_get_mode" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x8313decc, "bioset_init" },
	{ 0x4d754f2b, "mempool_init" },
	{ 0xa05c03df, "mempool_kmalloc" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0xc7d094b5, "dm_read_arg_group" },
	{ 0x152d6b27, "__percpu_counter_init" },
	{ 0xfdf637af, "dm_table_device_name" },
	{ 0x3246ba14, "crypto_alloc_ahash" },
	{ 0x28318305, "snprintf" },
	{ 0x85df9b6c, "strsep" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x9166fada, "strncpy" },
	{ 0x9f984513, "strrchr" },
	{ 0xba8ea898, "crypto_alloc_base" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x294477d6, "bio_add_page" },
	{ 0x80a72f1a, "bio_alloc_bioset" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xad27f361, "__warn_printk" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xec2580fd, "crypto_alloc_shash" },
	{ 0x8d8aba53, "crypto_shash_final" },
	{ 0xde9360ba, "totalram_pages" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x93da61de, "dm_put_device" },
	{ 0xac537ac2, "percpu_counter_destroy" },
	{ 0x53126ecc, "__percpu_counter_sum" },
	{ 0x36c2dd1d, "mempool_exit" },
	{ 0xbbcc03c5, "bioset_exit" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc2e1f262, "kthread_stop" },
	{ 0xf2215f74, "blk_finish_plug" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xece784c2, "rb_first" },
	{ 0x7a9b37e8, "blk_start_plug" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0xb7e2662, "crypto_alloc_skcipher" },
	{ 0x37ba5691, "crypto_alloc_aead" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0xf7d6636f, "current_task" },
	{ 0xc06df4fc, "crypto_shash_update" },
	{ 0x86c45796, "mempool_alloc" },
	{ 0x2eb50ce0, "dm_accept_partial_bio" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xd5825ce3, "bio_clone_fast" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xda8d2e0, "bio_integrity_add_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd6603235, "bio_integrity_alloc" },
	{ 0x29361773, "complete" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x2c456f2c, "generic_make_request" },
	{ 0xa975ccbd, "wake_up_process" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x121da905, "queue_work_on" },
	{ 0xdde3448f, "bio_put" },
	{ 0xe03ffb92, "crypto_shash_digest" },
	{ 0xb81bf6c5, "alloc_pages_current" },
	{ 0x80a717a8, "__percpu_counter_compare" },
	{ 0xe138fb8c, "percpu_counter_add_batch" },
	{ 0x5240ee7, "percpu_counter_batch" },
	{ 0x734d1ea8, "__free_pages" },
	{ 0xdf6e33f3, "crypto_destroy_tfm" },
	{ 0x5484198, "bio_endio" },
	{ 0x37a0cba, "kfree" },
	{ 0x74b55fe, "mempool_free" },
	{ 0x5133d363, "dm_per_bio_data" },
	{ 0x4863dc3, "bio_associate_blkg" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x3581fe70, "key_put" },
	{ 0xea2b701b, "up_read" },
	{ 0x91185511, "down_read" },
	{ 0x1ea9340b, "request_key" },
	{ 0x10caf5cf, "key_type_logon" },
	{ 0x5562cad, "key_type_user" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x11089ac7, "_ctype" },
	{ 0x37500af1, "hex2bin" },
	{ 0x7a4497db, "kzfree" },
	{ 0xc15a44c6, "memzero_explicit" },
	{ 0xcc845b48, "crypto_aead_setkey" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x349cba85, "strchr" },
	{ 0x754d539c, "strlen" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xfb578fc5, "memset" },
	{ 0x27e1a049, "printk" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-mod";


MODULE_INFO(srcversion, "AF5266F4AF67EDC48E0725C");
MODULE_INFO(rhelversion, "8.0");
