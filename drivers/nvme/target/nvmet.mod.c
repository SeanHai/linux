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
	{ 0x317a8ad6, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb9338741, "kmem_cache_destroy" },
	{ 0x402b8281, "__request_module" },
	{ 0x987ed54e, "fs_bio_set" },
	{ 0x8cefde72, "__blkdev_issue_discard" },
	{ 0xea778fab, "sg_pcopy_to_buffer" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x840342c6, "sgl_free" },
	{ 0xa2a0a4a5, "__blkdev_issue_zeroout" },
	{ 0xea2b701b, "up_read" },
	{ 0x80a72f1a, "bio_alloc_bioset" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x9300507b, "mempool_destroy" },
	{ 0xccd4c999, "__sg_page_iter_start" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x87b8798d, "sg_next" },
	{ 0xd0fe8d51, "sg_pcopy_from_buffer" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xd45cc6ca, "bin2hex" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x5802f531, "ida_simple_get" },
	{ 0xd3b5d39, "vfs_fsync" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x1ac5d3cb, "strcspn" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x91715312, "sprintf" },
	{ 0x91185511, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0xb67fec0e, "uuid_parse" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x183fa88b, "mempool_alloc_slab" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xcc56d1bd, "iov_iter_bvec" },
	{ 0xe81ad4d6, "bio_init" },
	{ 0x2a70864d, "__cpu_possible_mask" },
	{ 0x752d5f5b, "kstrtobool" },
	{ 0x11089ac7, "_ctype" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x294477d6, "bio_add_page" },
	{ 0xebca8b54, "mod_delayed_work_on" },
	{ 0x99096e86, "ida_simple_remove" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xfc128542, "bio_chain" },
	{ 0x9166fada, "strncpy" },
	{ 0xd63b3cd4, "blkdev_get_by_path" },
	{ 0x5a921311, "strncmp" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x7c9ca58f, "__sg_page_iter_next" },
	{ 0xfa7424c6, "config_group_init_type_name" },
	{ 0x373db350, "kstrtoint" },
	{ 0x16866f44, "radix_tree_next_chunk" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x63dbb9c4, "configfs_register_subsystem" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x85142f62, "up_write" },
	{ 0x65baf559, "down_write" },
	{ 0x50d83074, "fput" },
	{ 0x69e683de, "uuid_gen" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5484198, "bio_endio" },
	{ 0xa79f6dfa, "radix_tree_delete" },
	{ 0xdde3448f, "bio_put" },
	{ 0xdd57e2b5, "percpu_ref_exit" },
	{ 0xaf6ae696, "kstrndup" },
	{ 0x1eb76e2a, "module_put" },
	{ 0xd943f820, "submit_bio" },
	{ 0x4de931cc, "blkdev_put" },
	{ 0x86c45796, "mempool_alloc" },
	{ 0x5317d12d, "sgl_alloc" },
	{ 0xd0c86c05, "put_device" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa7260ae7, "vfs_fallocate" },
	{ 0x6a244503, "mempool_create" },
	{ 0x3fa0d062, "kstrtou16" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2d192c70, "sg_zero_buffer" },
	{ 0x3c173b08, "configfs_unregister_subsystem" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3dfc436e, "percpu_ref_kill_and_confirm" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x74b55fe, "mempool_free" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x85ffabba, "get_device" },
	{ 0x8678453c, "kmem_cache_create" },
	{ 0x937b5e60, "__radix_tree_next_slot" },
	{ 0x37a0cba, "kfree" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0x2c2719bd, "pci_dev_put" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x2e2a42c9, "percpu_ref_init" },
	{ 0x121da905, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x28318305, "snprintf" },
	{ 0x874dd0d1, "vfs_getattr" },
	{ 0xeb9a02d7, "config_group_init" },
	{ 0x32178f3f, "ida_destroy" },
	{ 0x85075cb1, "try_module_get" },
	{ 0xe914e41e, "strcpy" },
	{ 0x352e6812, "filp_open" },
	{ 0x4863dc3, "bio_associate_blkg" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "2152AF51A1BF8E2777BA6C8");
MODULE_INFO(rhelversion, "8.0");
