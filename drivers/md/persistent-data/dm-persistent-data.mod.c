#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x74dcd98c, "dm_bufio_get_aux_data" },
	{ 0x9c256008, "dm_bufio_get_device_size" },
	{ 0xafbda3f3, "dm_bufio_new" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xa82b2066, "dm_bufio_write_dirty_buffers" },
	{ 0xb15b4109, "crc32c" },
	{ 0xfb578fc5, "memset" },
	{ 0x7c381a76, "dm_bufio_get_block_size" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xe6024e59, "dm_bufio_release" },
	{ 0x9b53954a, "dm_bufio_client_create" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0xebcc64a4, "dm_bufio_get_block_data" },
	{ 0xeca7949e, "dm_bufio_client_destroy" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x6aba7f5e, "dm_bufio_get_block_number" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xa1d2413a, "dm_bufio_read" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xad0dc4f, "dm_bufio_mark_buffer_dirty" },
	{ 0xcbb1bae2, "dm_bufio_get" },
	{ 0xa448e19f, "dm_bufio_prefetch" },
	{ 0x6d3f57bd, "dm_bufio_get_client" },
	{ 0xb0e602eb, "memmove" },
	{ 0xe3fffae9, "__x86_indirect_thunk_rbp" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-bufio,libcrc32c";


MODULE_INFO(srcversion, "D0CA4C6521244481D6D5DB5");
MODULE_INFO(rhelversion, "8.0");
