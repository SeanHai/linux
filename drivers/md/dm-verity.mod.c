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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x1e7bbcb3, "kernel_restart" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x74dcd98c, "dm_bufio_get_aux_data" },
	{ 0xa5472d82, "dm_get_device" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x9c256008, "dm_bufio_get_device_size" },
	{ 0x783b1e86, "dm_table_get_md" },
	{ 0x6d0f1f89, "dm_table_get_mode" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x5dfc419b, "dm_register_target" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x9d953947, "dm_disk" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0xa24ccc89, "blk_limits_io_min" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd23084bc, "crypto_ahash_final" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xc7d094b5, "dm_read_arg_group" },
	{ 0xfb578fc5, "memset" },
	{ 0xf7d6636f, "current_task" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0x27e1a049, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0xefde5167, "dm_unregister_target" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xe6024e59, "dm_bufio_release" },
	{ 0x9b53954a, "dm_bufio_client_create" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x2c456f2c, "generic_make_request" },
	{ 0x5ef0a3e9, "crypto_req_done" },
	{ 0x5484198, "bio_endio" },
	{ 0xdf2dafc4, "kobject_uevent_env" },
	{ 0xc5bc25de, "kvmalloc_node" },
	{ 0xeca7949e, "dm_bufio_client_destroy" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdf6e33f3, "crypto_destroy_tfm" },
	{ 0x37500af1, "hex2bin" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x430f1014, "dm_bio_from_per_bio_data" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0xa1d2413a, "dm_bufio_read" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0xa448e19f, "dm_bufio_prefetch" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x93da61de, "dm_put_device" },
	{ 0x5133d363, "dm_per_bio_data" },
	{ 0x121da905, "queue_work_on" },
	{ 0x28318305, "snprintf" },
	{ 0x3de37959, "vmalloc_to_page" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0x3246ba14, "crypto_alloc_ahash" },
	{ 0x4863dc3, "bio_associate_blkg" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-bufio,dm-mod";


MODULE_INFO(srcversion, "CAE4138C5D78E630D93BCA3");
MODULE_INFO(rhelversion, "8.0");
