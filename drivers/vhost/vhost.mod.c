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
	{ 0x195b9e7e, "__put_devmap_managed_page" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xdf0f75c6, "eventfd_signal" },
	{ 0xc7a1840e, "llist_add_batch" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x540fab50, "_copy_from_iter" },
	{ 0x8ff5c83, "set_page_dirty_lock" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x413b06d3, "mmput" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x60b40fd8, "copy_user_enhanced_fast_string" },
	{ 0xeb81585a, "kthread_create_on_node" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xf7d6636f, "current_task" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xc2e1f262, "kthread_stop" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xd67364f7, "eventfd_ctx_fdget" },
	{ 0x92cf6e99, "get_task_mm" },
	{ 0xe5772d4a, "copy_user_generic_string" },
	{ 0xa1716baf, "__rb_insert_augmented" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xa10fd51b, "use_mm" },
	{ 0x50d83074, "fput" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xc5bc25de, "kvmalloc_node" },
	{ 0xdcc3a419, "copy_user_generic_unrolled" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xddb1cd7, "llist_reverse_order" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0x441c3b70, "_copy_from_iter_full" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa975ccbd, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x302ee579, "iov_iter_init" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xf654831f, "ex_handler_default" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xb8376b85, "eventfd_fget" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xca9360b5, "rb_next" },
	{ 0x4b13e55b, "cgroup_attach_task_all" },
	{ 0x29361773, "complete" },
	{ 0x941f2aaa, "eventfd_ctx_put" },
	{ 0xec89da9c, "param_ops_ushort" },
	{ 0xf0741fe4, "unuse_mm" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x551bd071, "__rb_erase_color" },
	{ 0x3f33e88c, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2a6bb061, "__put_page" },
	{ 0x9af36e0c, "get_user_pages_fast" },
	{ 0xf1e63929, "devmap_managed_key" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "92625F88777BB7F0EEC8DA3");
MODULE_INFO(rhelversion, "8.0");
