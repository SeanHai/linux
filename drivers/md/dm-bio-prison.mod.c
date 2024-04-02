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
	{ 0x36c2dd1d, "mempool_exit" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x183fa88b, "mempool_alloc_slab" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5484198, "bio_endio" },
	{ 0x86c45796, "mempool_alloc" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x74b55fe, "mempool_free" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x8678453c, "kmem_cache_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x4d754f2b, "mempool_init" },
	{ 0x121da905, "queue_work_on" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "99434C60A1BEEAC9DE78475");
MODULE_INFO(rhelversion, "8.0");
